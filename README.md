# CCPP

## 입출력 싱크

```cpp
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
```

`cin`과 `cout` 의 싱크를 해제하여 버퍼동기화를 하지않아 시간 단축이 가능함  
단, `scanf`와 `printf` 사용금지

## STL(Standard Template Library)

- STL 4가지 알고리즘/컨테이너/이터레이터/펑터 vector나 sort()등이 이에 해당

- ### Container

  C++ 에서 제공하는 자료구조를 의미함  
  시퀀스 컨테이너/연관 컨테이너/정렬되지 않은 연관컨테이너/컨테이너 어댑터 4가지

  1. 시퀀스 컨테이너

  - 데이터를 단순히 저장해 놓는 자료구조를 뜻하며  
    array, vector, deque, forward_list, list 가 있다.

  2. 연관 컨테이너

  - 자료가 저장됨에 따라 자동정렬되는 자료구조  
    중복키가 가능한 것은 이름앞에 `multi`가 붙음 set,map,multiset,multimap

  3. 정렬되지 않은 연관 컨테이너

  - 자료가 저장될때 자동정렬이 되지않음 앞에 `unordered`가 붙음

  4. 컨테이너 어댑터

  - 시퀀스 컨테이너로 만든 자료구조  
    stack, queue는 deque로 만들어져 있으며 priority_queue는 vector을 이용해  
    힙 자료구조로 만듬
