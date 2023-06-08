#include <iostream>
using namespace std;

#pragma region "selection"
//int main() {
//	int a[101], n, tmp, idx, i, j;
//	cin >> n;//�ݺ��ؼ� �Է¹ް�
//	for (i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (i = 0; i < n - 1; i++) {//0���� ������ ������ �ݺ���(�������� �����Ŵϱ� �׳� ���ĵǾ� �ְ���?
//		idx = i;//i�� �ٷ� ������ �ϸ� �갡 ��� �ٲ� ��ư �׷��� idx�� �ѹ� �־���� )�ؿ� idx = j�̺κ�
//		for (j = i + 1; j < n; j++) {//i�������� �� ���������� �̵��ϸ鼭 ���� ������ ã�ƿ�
//			// ���� ä�켼��;
//			if (a[j] < a[idx])//���� ������
//			{
//				idx = j;//�ε������ٰ� �갡 �۾ƿ� ��� �������
//			}
//		}
//		//������ ������ idx�� ���� ���� ���̰���? �׷� ������ �����
//		tmp = a[i];
//		a[i] = a[idx];
//		a[idx] = tmp;
//	}
//	for (i = 0; i < n; i++) {
//		cout << a[i] << " ";//�׸��� ���
//	}
//	return 0;
//}
#pragma endregion

#pragma region "insertion"
//int main() {
//	int a[100], n, tmp, i, j;
//	cin >> n;//�Է¹��� ������
//	for (i = 0; i < n; i++) {
//		cin >> a[i];//�Է������
//	}
//	for (i = 1; i < n; i++) {//�� �������� �˻��ϴѱ� 0�� ���ʿ䰡 ������? �׷��� 1�̿���
//		tmp = a[i];//�굵 temp�� i��°�� �־��ְ�
//		for (j = i - 1; j >= 0; j--) {//�������� �����ϴ� �ִϱ� ��(--)������ ������
//			// ���� ä�켼��;
//			if (tmp < a[j])//�׷��� ���� tmp�� a[j]���� ������
//				a[j + 1] = a[j];//�������� �о���� 
//			else//�ƴϸ� ���ʿ� ���ֵ��� �����ѱ�
//				break;//�������
//		}
//		a[j + 1] = tmp;//���������ٰ� ���־��ָ� ��
//	}
//	for (i = 0; i < n; i++) {
//		cout << a[i] << " ";//�״�� ���
//	}
//	return 0;
//}
#pragma endregion

#pragma region "bubble"
//int main() {
//	int a[101], n, i, j, tmp;
//	cin >> n;//������
//	for (i = 0; i < n; i++) {
//		cin >> a[i];//�־���
//	}
//	for (i = 0; i < n - 1; i++) {//�������� �� ������������ �𸣸� ã�ƿ��ð�
//		for (j = 0; j < n - i - 1; j++) {
//			//������ ä�켼��
//			if (a[j] > a[j + 1]) {//���� �տ��ִ°� �ڿ��ִ°� ���� ũ��
//				tmp = a[j];//�ٲ���
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++) {
//		cout << a[i] << " ";//�����
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
		p1 = left; // ���ĵ� ���� �迭�� ���� �ε���
		p2 = mid + 1; // ���ĵ� ������ ����Ʈ�� ���� �ε���
		p3 = left; // �պ��� ����Ʈ�� ���� �ε���
		//�������ĵ� �迭�� �պ�
		while (p1 <= mid && p2 <= right) {
			// ���� ä�켼�� ;
			if (a[p1] > a[p2]) {
				sorted[p3++] = a[p2++];
			}
			// ���� ä�켼��;
			else {
				sorted[p3++] = a[p1++];
			}
		}
		// ���� �ִ� ���� �迭 �ϰ� ����
		while (p1 <= mid) sorted[p3++] = a[p1++];

		// ���� �ִ� ������ �迭 �ϰ� ����
		while (p2 <= right) sorted[p3++] = a[p2++];
		
		//�迭 sorted�� �迭 a�� �纹��
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
//	if (start >= end) {	//���Ұ� 1���� ��� 
//		return;
//	}
//	int key = start;	//Ű�� ù��° ����
//	int left = start + 1;	//���� ��� ���� 
//	int right = end;		//������ ��� ���� 
//	int temp;
//
//	while (left <= right) {	//������ ������ �ݺ� 
//		while (a[left] <= a[key] && left<=right) {	//Ű ������ ū ���� ���� ������ 
//			left++;
//		}
//		while (a[right] >= a[key] && right > start) {	//Ű ������ ���� ���� ���� ������ 
//			right--;
//		}
//		if (left >= right) {	//���� �����ų� ������ ���¸� Ű ���� ��ü <- �����ų� �����ȴٴ� ���� �� �ڸ��� Ű���̶�� ���̴�.
//			temp = a[right];   //���� ���� ������ ������ ���� �ִ�.
//			a[right] = a[key];
//			a[key] = temp;
//		}
//		else {		//�������� �ʾҴٸ� i�� j�� ��ü <- �������� �ʾҴٴ°� left�� right���� ū ��Ȳ �׷��� �������� ������ ���� ���� �ٲ���
//			// 3�� ä�켼��
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
//		cin >> a[i];//�Է�
//	}
//	quickSort(0, n-1);//�ε����� ����Ʈ ����
//
//	for (i = 0; i < n; i++) {
//		cout << a[i] <<" ";//���
//	}
//	return 0;
//}
#pragma endregion

#pragma region "count"
//int main() {
//	int n;//�ݺ��� ��
//	cin >> n;
//	int data = 0;//�Է¹��� ����
//	int cnt[10001] = { 0 };//����� 10001���� ���Ǹ� �ؼ� �� �̻��� ���� ������
//
//	for (int i = 0; i < n; i++) {
//		cin >> data;//���� �ְ�
//      // ���� ä�켼�� 
//		cnt[data]++;//���� ���� �ε����� 1������
//	}
//
//	for (int i = 1; i < 10001; i++) {
//		while (cnt[i] != 0) {//0�̾ƴ϶�� ���� ���Դٴ� ���̴ѱ�
//			cout << i << " ";//�� �ε���(��)�� ������ϰ�
//         // ���� ä�켼�� ;
//			cnt[i]--;//����
//		}
//	}
//}
#pragma endregion

#pragma region "radix" 
//#define BUCKETS 10// 0 ~ 9����
//#define DIGITS 3// �ڸ���
//#include <queue>
//
//queue<int>q[10];
//int num[100];
//void radix_sort(int size) 
//{
//	int i = 0, factor = 1;//i = �ε��� factor = �ڸ���
//	for (int d = 0; d < DIGITS; d++)//�ڸ��� ��ŭ �ݺ�: ������ 3�̴ϱ� ���� �ڸ����� ���Ĵ�
//	{
//		for (int j = 0; j < size; j++)
//		{
//			q[(num[j] / factor) % 10].push(num[j]);//�ڸ��� �������� 0~9�ؼ� ����
//		}
//
//		for (int k = 0; k < BUCKETS; k++)//��Ŷ��ŭ 0���� 9���� ������� ����
//		{
//			while (q[k].size())//ť�� ���� �ִµ���
//			{
//				num[i++] = q[k].front();//�ε���0���� ���ֱ�
//				q[k].pop();// �������� ����
//			}
//		}
//		//2�� ä�켼�� 
//		factor *= 10;//���� �ڸ����� ����
//		i = 0;//�ε����� �ٽ� 0����
//	}
//}
//
//int main() {
//	int size;//����
//	cin >> size;
//	for (int i = 0; i < size; i++) {
//		cin >> num[i];//�Է¹ް�
//	}
//	radix_sort(size);//���Ľ���
//	for (int i = 0; i < size; i++) {
//		cout << num[i] << " ";//���
//	}
//}
#pragma endregion