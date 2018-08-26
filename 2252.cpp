#include <iostream>
#include <vector>
#include <queue> 
#include <map> 
#include <fstream> 
#include <string> 
#include <algorithm> 
using namespace std; int N, M; int indegree[35002]; vector<int> adj[35002]; int main() { int from, to; scanf("%d %d", &N, &M); for (int i = 0; i < M; i++) { scanf("%d %d", &from, &to); adj[from].push_back(to); indegree[to]++; } queue<int> topoloQ; queue<int> result; for (int i = 1; i <= N; i++) { if (indegree[i] == 0) { topoloQ.push(i); } } while (!topoloQ.empty()) { int loopcount = topoloQ.size(); for (int loop = 0; loop < loopcount; loop++) { int now = topoloQ.front(); result.push(now); topoloQ.pop(); indegree[now]--; for (int next : adj[now]) { indegree[next]--; if (indegree[next] == 0) { topoloQ.push(next); } } } } for (int i = 1; i <= N; i++) { cout << result.front() << " "; result.pop(); } return 0; } 
