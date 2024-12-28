#include <iostream>
#include <string>
#include <vector>
#include "Formula.h"
#include "Eval.h"



using namespace std;


void generateArrays(int road_num, int car_num, vector<int>& current, vector<vector<int>>& results) 
{
    // 현재 배열이 road_num 길이를 가지면서 합이 car_num일 때 결과 저장
    if (current.size() == road_num) 
    {
        if (car_num == 0) 
        {
            results.push_back(current);
        }
        return;
    }

    // 남은 car_num만큼 값을 할당
    for (int i = 0; i <= car_num; ++i) 
    {
        current.push_back(i); // 현재 원소 추가
        generateArrays(road_num, car_num - i, current, results); // 다음 단계로 진행
        current.pop_back(); // 현재 원소 제거 (백트래킹)
    }
}

int main(void)
{
	int road_num, car_num;
	
	cout << "도로의 수를 입력하세요 : ";
	cin >> road_num;
	cout << "차량의 수를 입력하세요 : ";
	cin >> car_num;

    //각 도로에서 차가 x대 갈때 걸리는 시간(f(x))를 담아줄 포인터 배열
    string *road_func = new string[road_num];


    vector<vector<int>> results; // 결과를 저장할 벡터
    vector<int> current;         // 현재 배열
    generateArrays(road_num, car_num, current, results);

    for (int i = 0; i < road_num; i++)
    {
        formula temp;
        string t;
        cout << i + 1 << "번째 도로의 함수식을 입력하세요 : ";
        cin >> t;
        temp.set_frml(t);
        temp.convert();
        
    }

    for (const auto& temp : results)
    {
        for (int car : temp)
        {

        }
    }
    
    cout << (int)'0';


	return 0;
}
