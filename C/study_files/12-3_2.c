// 포인터 이용하기(제일 어려운 단원)

#include <stdio.h>

int main(){

    int arr[10] = {100,98,97,95,89,76,92,96,100,99};

    int *parr = arr;
    int sum = 0;

    while(parr-arr <= 9){   // int형이니까 주솟값으로 4(바이트) * 9(개) 차이날때까지 즉 10개의 점수를 다 계산할때까지 계속한다.
        sum += (*parr);
        parr++;
    }

    printf("내 시험 점수 평균 : %d \n", sum/10 );

    return 0;
}

/*
왜 굳이 parr 을 따로 선언하였을까요? 
우리는 arr 이 arr[0] 을 가리킨다는 사실을 알고 있으므로 arr 을 증가시켜서 *(arr) 으로 접근해도 되지 않을까요? 
한 번, arr 의 값을 arr++를 통해 parr++을 대신하여 변경할 수 있는지 없는지 살펴봅시다.

배열의 이름이 첫 번째 원소를 가리키는 포인터로 타입 변경 된다고 했을 때, 
이는 단순히 배열의 첫 번째 원소를 가리키는 주소값 자체가 될 뿐입니다. 
따라서 arr++ 문장은 C 컴파일러 입장에서 다음을 수행한 것과 같습니다.
(0x7fff1234) ++; 
이는 애초에 말이 안되는 문장 이지요.




*/



