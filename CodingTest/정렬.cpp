#include <iostream>
using namespace std;

#pragma region "selection"
//int main() {
//	int a[101], n, tmp, idx, i, j;
//	cin >> n;//반복해서 입력받고
//	for (i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (i = 0; i < n - 1; i++) {//0부터 마지막 전까지 반복해(마지막은 남은거니까 그냥 정렬되어 있겠죠?
//		idx = i;//i로 바로 정렬을 하면 얘가 계속 바뀜 암튼 그래서 idx에 한번 넣어줘요 )밑에 idx = j이부분
//		for (j = i + 1; j < n; j++) {//i다음부터 즉 오른쪽으로 이동하면서 뭐가 작은지 찾아요
//			// 한줄 채우세요;
//			if (a[j] < a[idx])//만약 작으면
//			{
//				idx = j;//인덱스에다가 얘가 작아요 라고 말해줘요
//			}
//		}
//		//포문이 끝나면 idx는 제일 작은 값이겠죠? 그럼 스왑을 해줘용
//		tmp = a[i];
//		a[i] = a[idx];
//		a[idx] = tmp;
//	}
//	for (i = 0; i < n; i++) {
//		cout << a[i] << " ";//그리고 출력
//	}
//	return 0;
//}
#pragma endregion

#pragma region "insertion"
//int main() {
//	int a[100], n, tmp, i, j;
//	cin >> n;//입력받을 사이즈
//	for (i = 0; i < n; i++) {
//		cin >> a[i];//입력해줘용
//	}
//	for (i = 1; i < n; i++) {//얜 왼쪽으로 검사하닌깐 0은 할필요가 없겠죵? 그래서 1이에용
//		tmp = a[i];//얘도 temp에 i번째에 넣어주고
//		for (j = i - 1; j >= 0; j--) {//왼쪽으로 정렬하는 애니깐 역(--)포문을 돌려요
//			// 한줄 채우세요;
//			if (tmp < a[j])//그래서 현재 tmp가 a[j]보다 작으면
//				a[j + 1] = a[j];//왼쪽으로 밀어줘용 
//			else//아니면 애초에 모든애들이 작으닌깐
//				break;//끝내줘용
//		}
//		a[j + 1] = tmp;//마지막에다가 값넣어주면 끝
//	}
//	for (i = 0; i < n; i++) {
//		cout << a[i] << " ";//그대로 출력
//	}
//	return 0;
//}
#pragma endregion

#pragma region "bubble"
//int main() {
//	int a[101], n, i, j, tmp;
//	cin >> n;//사이즈
//	for (i = 0; i < n; i++) {
//		cin >> a[i];//넣어줘
//	}
//	for (i = 0; i < n - 1; i++) {//이중포문 왜 이중포문인지 모르면 찾아오시고
//		for (j = 0; j < n - i - 1; j++) {
//			//한줄을 채우세요
//			if (a[j] > a[j + 1]) {//만약 앞에있는거 뒤에있는거 보다 크면
//				tmp = a[j];//바꿔줘
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++) {
//		cout << a[i] << " ";//출력해
//	}
//	return 0;
//}
#pragma endregion 

#pragma region "merge"
int a[101], sorted[101];

void merge(int left, int right) {
	int mid;
	int p1, p2, p3;

	if (left < right) {
		mid = (left + right) / 2;
		merge(left, mid);
		merge(mid + 1, right);
		p1 = left; // 정렬된 왼쪽 배열에 대한 인덱스
		p2 = mid + 1; // 정렬된 오른쪽 리스트에 대한 인덱스
		p3 = left; // 합병될 리스트에 대한 인덱스
		//분할정렬된 배열의 합병
		while (p1 <= mid && p2 <= right) {
			// 한줄 채우세요 ;
			if (a[p1] > a[p2]) {
				sorted[p3++] = a[p2++];
			}
			// 한줄 채우세요;
			else {
				sorted[p3++] = a[p1++];
			}
		}
		// 남아 있는 왼쪽 배열 일괄 복사
		while (p1 <= mid) sorted[p3++] = a[p1++];

		// 남아 있는 오른쪽 배열 일괄 복사
		while (p2 <= right) sorted[p3++] = a[p2++];
		
		//배열 sorted를 배열 a로 재복사
		for (int i = left; i <= right; i++) {
			a[i] = sorted[i];
		}
	}
}

int main() {
	int n, i;
	cin >> n; 
	for (i = 1; i <= n; i++) {
		cin >> a[i];
	}
	merge(1, n);
	for (i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
#pragma endregion

#pragma region "quick" 
//int a[100];
//void quickSort(int start, int end) {
//	if (start >= end) {	//원소가 1개인 경우 
//		return;
//	}
//	int key = start;	//키는 첫번째 원소
//	int left = start + 1;	//왼쪽 출발 지점 
//	int right = end;		//오른쪽 출발 지점 
//	int temp;
//
//	while (left <= right) {	//엇갈릴 때까지 반복 
//		while (a[left] <= a[key] && left<=right) {	//키 값보다 큰 값을 만날 때까지 
//			left++;
//		}
//		while (a[right] >= a[key] && right > start) {	//키 값보다 작은 값을 만날 때까지 
//			right--;
//		}
//		if (left >= right) {	//현재 만나거나 엇갈린 상태면 키 값과 교체 <- 만나거나 엇갈렸다는 것은 그 자리가 키값이라는 뜻이다.
//			temp = a[right];   //만약 값이 같으면 엇갈릴 수도 있다.
//			a[right] = a[key];
//			a[key] = temp;
//		}
//		else {		//엇갈리지 않았다면 i와 j를 교체 <- 엇갈리지 않았다는건 left가 right보다 큰 상황 그래서 오름차순 정렬을 위해 둘이 바꿔줌
//			// 3줄 채우세요
//			temp = a[left];
//			a[left] = a[right];
//			a[right] = temp;
//		}
//	}
//	quickSort(start, right - 1);
//	quickSort(right + 1, end);
//}
//
//int main() {
//	int n, i;
//	cin >> n;
//	for (i = 0; i < n; i++) {
//		cin >> a[i];//입력
//	}
//	quickSort(0, n-1);//인덱스로 퀵소트 시작
//
//	for (i = 0; i < n; i++) {
//		cout << a[i] <<" ";//출력
//	}
//	return 0;
//}
#pragma endregion

#pragma region "count"
//int main() {
//	int n;//반복할 수
//	cin >> n;
//	int data = 0;//입력받을 변수
//	int cnt[10001] = { 0 };//사이즈를 10001으로 정의를 해서 그 이상의 수는 못넣음
//
//	for (int i = 0; i < n; i++) {
//		cin >> data;//값을 넣고
//      // 한줄 채우세요 
//		cnt[data]++;//값을 넣은 인덱스를 1더해줘
//	}
//
//	for (int i = 1; i < 10001; i++) {
//		while (cnt[i] != 0) {//0이아니라는 수가 들어왔다는 뜻이닌깐
//			cout << i << " ";//그 인덱스(수)를 출력을하고
//         // 한줄 채우세요 ;
//			cnt[i]--;//빼줘
//		}
//	}
//}
#pragma endregion

#pragma region "radix" 
//#define BUCKETS 10// 0 ~ 9까지
//#define DIGITS 3// 자릿수
//#include <queue>
//
//queue<int>q[10];
//int num[100];
//void radix_sort(int size) 
//{
//	int i = 0, factor = 1;//i = 인덱스 factor = 자릿수
//	for (int d = 0; d < DIGITS; d++)//자릿수 만큼 반복: 지금은 3이니까 백의 자리까지 정렬댐
//	{
//		for (int j = 0; j < size; j++)
//		{
//			q[(num[j] / factor) % 10].push(num[j]);//자릿수 기준으로 0~9해서 넣음
//		}
//
//		for (int k = 0; k < BUCKETS; k++)//버킷만큼 0부터 9까지 순서대로 정렬
//		{
//			while (q[k].size())//큐에 값이 있는동안
//			{
//				num[i++] = q[k].front();//인덱스0부터 값넣기
//				q[k].pop();// 넣은값은 빼기
//			}
//		}
//		//2줄 채우세요 
//		factor *= 10;//다음 자릿수로 정렬
//		i = 0;//인덱스는 다시 0부터
//	}
//}
//
//int main() {
//	int size;//갯수
//	cin >> size;
//	for (int i = 0; i < size; i++) {
//		cin >> num[i];//입력받고
//	}
//	radix_sort(size);//정렬시작
//	for (int i = 0; i < size; i++) {
//		cout << num[i] << " ";//출력
//	}
//}
#pragma endregion