function solution(bandage, health, attacks) {
    var answer = 0;
    
    let currentSuccess = 0;
    let currentHealth = health;
    
    const [ bandageTime, healPerSecond, additionHeal ] = bandage;
    const lastTime = attacks[attacks.length -1][0];
    const attackTimeSet = new Set(attacks.map(attack => attack[0]));
    const attackHealthMap = new Map(attacks);
    
    for(let i = 0; i <= lastTime; i++) {
        if(attackTimeSet.has(i)) {
            //몬스터 공격 받을 때
            currentSuccess = 1;
            const damage = attackHealthMap.get(i);
            currentHealth -= damage;
            
            if(currentHealth <= 0) {
            // 체력 0 이하되면 무조건 -1 return
                answer = -1;
                break;
            }
        } else {
            // 몬스터 공격 안받을 때
            if(currentSuccess == bandageTime) {
                //t초 동안 기술 성공하면 추가 회복
                if(currentHealth + additionHeal <= health) {
                    currentHealth += additionHeal;
                } else {
                    currentHealth = health;
                }
                currentSuccess = 1;
            }
            
            // 1초마다 체력 회복
            if(currentHealth < health) {
                currentHealth += healPerSecond;
                
                if(currentHealth > health) {
                    currentHealth = health;
                }
                
                currentSuccess += 1;
            }
            
        }
    }
    
    if(currentHealth <= 0) {
        answer = -1;
    } else {
        answer = currentHealth;
    }
    
    return answer;
}