 #include<iostream>
 using namespace std;
 
 class graph
 {
	private:
 		int size, edge, graph[20][20];
	public:
 		void info()
 		{
 			cout << "Enter size: \n";
 			cin >> size;
 			cout << "Enter edges: \n";
 			cin >> edge;
 			for(int i = 0; i < size; i++)
 			{
 				for(int j = 0; j < size; j++)
 				{
 					graph[i][j] = 0;
				 }
			 }
			 
			for(int k = 0; k < edge; k++)
			{
				int l, m;
				cout << "Enter start: ";
				cin >> l;
				cout << "Enter end: ";
				cin >> m;
				graph[l - 1][m - 1] = 1;
			}
		 }
		 
		void print()
		{
			for(int i = 0; i < size; i++)
 			{
 				for(int j = 0; j < size; j++)
 				{
 					cout << graph[i][j] << " ";
				 }
				cout << endl;
			 }
		}
		
		void depthTrav(int k)
		{
			int stack[20], printstatus[size], index = 0;
			stack[index] = k;
			for(int i = 0; i < size; i++)
			{
				printstatus[i] = 0;
			}
			
			while(index >= 0)
			{
				if(printstatus[stack[index] - 1] == 0)
				{
					cout << stack[index] << endl;
					printstatus[stack[index] - 1] = 1;
					index--;
					for(int j = size - 1; j >= 0; j--)
					{
						if(graph[k - 1][j] == 1)
						{
							stack[index + 1] = j + 1;
							index++;
						}
					}
					k = stack[index];
				}
				else
				{
					index--;
				}				
			}
		}
		
		void breadthTrav(int k)
		{
			int queue[20], printstatus[size], index1 = 0, index2 = 0;
			queue[index1] = k;
			for(int i = 0; i < size; i++)
			{
				printstatus[i] = 0;
			}
			
			int i = 0;
			while(i < size)
			{
				if(printstatus[queue[index2] - 1] == 0)
				{
					cout << queue[index2] << endl;
					printstatus[queue[index2] - 1] = 1;
					index2++;
					for(int j = 0; j < size; j++)
					{
						if(graph[k - 1][j] == 1)
						{
							queue[index1 + 1] = j + 1;
							index1++;
						}
					}
					k = queue[index1];
				}
				i++;			
			}
		}
 };
 
 int main()
 {
 	graph temp;
 	temp.info();
 	cout << endl;
 	temp.print();
 	cout << endl;
 	temp.depthTrav(2);
 	cout << endl;
 	temp.breadthTrav(2);
 	
 	return 0;
 }
 
