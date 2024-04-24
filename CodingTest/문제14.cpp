#include <iostream>
#include <time.h>

using namespace std;

unsigned long long F(int n)
{
    if (n <= 1)
        return n;
    else
        return F(n - 1) + F(n - 2);
}

unsigned long long dp[51] = { 0,1,1 };
unsigned long long DP()
{
    for (int i = 2; i < 51; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[50];
}

int main()
{
	clock_t start, finish;
	double duration;

    //----------------재귀
	start = clock();
    cout << "결과 값: " << F(50) << '\n';
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << "재귀: " << duration << "초\n";
    //----------------다이나믹 프로그래밍
    start = clock();
    cout << "결과 값: " << DP() << '\n';
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << "DP: " << duration << "초\n";
    return 0;
}

//while (OpenNodes.Num() != 0) {
//	OpenNodes.StableSort([](const AGridNode& node1, const AGridNode& node2) {return node2 > node1; });
//
//	CurrentNode = OpenNodes.Pop();
//	if (CurrentNode == GoalNode) break;
//
//	TArray<AGridNode*> ChildNodes = Grid->GetValidNeighbors(CurrentNode);
//	for (auto& ChildNode : ChildNodes) {
//		int currentcost = CurrentNode->cost + CostNodes(CurrentNode, ChildNode);
//		if (OpenNodes.Contains(ChildNode)) {
//			if (ChildNode->cost <= currentcost) continue; 
//		}
//		else if (ClosedNodes.Contains(ChildNode)) {
//			continue;
//		}
//		else {
//			OpenNodes.Add(ChildNode);
//			SetOpenNode(ChildNode);
//			TotalOpenNodes++;
//			ChildNode->heuristic = Heuristic(ChildNode);
//		}
//		ChildNode->cost = currentcost;
//		ChildNode->parent = CurrentNode;
//	}
//	ClosedNodes.Add(CurrentNode);
//	ExploredNodes++;
//	SetClosedNode(CurrentNode);
//}