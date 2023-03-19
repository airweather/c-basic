#include <stdio.h> // 표준입출력 라이브러리를 불러온다.
#pragma warning(disable:4996) // Visual Studio에서 발생하는 경고 메시지를 무시한다.

void main() { // main 함수를 정의한다.
    int in_money, coin_500, coin_100, coin_50, coin_10; // 변수를 선언한다.
    printf(" 동전으로 교환할 금액은? "); // "동전으로 교환할 금액은?"을 출력한다.
    scanf("%d", &in_money); // 사용자로부터 정수형 변수 in_money에 값을 입력받는다.
    coin_500 = in_money / 500; // 500원짜리 동전의 개수를 계산한다.
    in_money = in_money % 500; // 500원짜리 동전으로 바꾸지 못한 잔돈을 계산한다.
    coin_100 = in_money / 100; // 100원짜리 동전의 개수를 계산한다.
    in_money = in_money % 100; // 100원짜리 동전으로 바꾸지 못한 잔돈을 계산한다.
    coin_50 = in_money / 50; // 50원짜리 동전의 개수를 계산한다.
    in_money = in_money % 50; // 50원짜리 동전으로 바꾸지 못한 잔돈을 계산한다.
    coin_10 = in_money / 10; // 10원짜리 동전의 개수를 계산한다.
    in_money = in_money % 10; // 10원짜리 동전으로 바꾸지 못한 잔돈을 계산한다.
    printf("\n 오백 원짜리 => %d 개 \n", coin_500); // 500원짜리 동전의 개수를 출력한다.
    printf(" 백 원짜리 => %d 개 \n", coin_100); // 100원짜리 동전의 개수를 출력한다.
    printf(" 오십 원짜리 => %d 개 \n", coin_50); // 50원짜리 동전의 개수를 출력한다.
    printf(" 십 원짜리 => %d 개 \n", coin_10); // 10원짜리 동전의 개수를 출력한다.
    printf(" 바꾸지 못한 잔돈 => %d 원 \n", in_money); // 바꾸지 못한 잔돈을 출력한다.
} // main 함수의 끝.