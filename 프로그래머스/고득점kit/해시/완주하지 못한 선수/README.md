## 완주하지 못한 선수

- sort 함수를 사용하여 participant, completion 배열을 정렬
- 두 정렬된 배열을 같은 index끼리 비교하여 값이 다르면 해당 참가자가 완주자 목록에 없다는 의미
- 따라서 값이 다를 때의 participant 배열의 이름을 반환



- 모두 같은 값이라면 participant 배열의 마지막 원소가 완주자 목록에 없으므로 해당 값을 반환