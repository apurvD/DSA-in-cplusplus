#include <bits/stdc++.h>

using namespace std;

void explainPair()
{
    std::pair<int, int> p = {1, 2};
    cout << p.first << "  " << p.second << endl;

    std::pair<int, std::pair<int, int>> nested = {1, {2, 3}};
    cout << nested.first << endl;
    cout << nested.second.first << endl;
    cout << nested.second.second << endl;

    std::pair<int, int> arr[] = {{1, 2}, {2, 5}, {3, 1}};
    cout << arr[0].first << endl;
    cout << arr[0].second << endl;
    cout << arr[1].second << endl;
}

void explainVector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    // displaying vector contents, not using pointer.
    //  for (auto it:v)
    //  {
    //      cout<<it<<endl;
    //  }
    // displaying, using v.begin(), v.end() and dereferencing the iterator.
    //  for (auto it = v.begin(); it != v.end(); it++)
    //  {
    //      cout<<*it<<endl;
    //  }

    for (int i = 0; i < 10; i++)
    {
        v.push_back(i); // inserting elements in the vector
    }

    vector<pair<int, int>> pv;
    pv.push_back({12, 32});
    pv.emplace_back(421, 213);
    // Iterate over each pair in the vector
    // for (const auto& pair : pv) {
    //     // Print the elements of the pair
    //     std::cout << "(" << pair.first << ", " << pair.second << ") "<<endl;
    // }

    vector<int> t1(5);
    // for (auto it : t1)
    // {
    //     cout << it << endl;
    // }
    vector<int> t2(5, 122);
    // for (auto it : t2)
    // {
    //     cout << it << endl;
    // }
    vector<int> t3(t2);
    // for (auto it : t3)
    // {
    //     cout << it << endl;
    // }

    // ERASE, one param - removes that element from the vector
    //  v.erase(v.begin());
    //  for(auto it:v)
    //      cout<<" "<<it;
    // erase, two params: its the range from begin to end for removing elements
    //  v.erase(v.begin(),v.begin()+3);
    //  for(auto it:v)
    //      cout<<" "<<it;

    // INSERT in vector (v.insert())
    v.insert(v.begin(), 1021);

    // inserting at multiple indexes: specify number of times, and the element to be inserted
    v.insert(v.end(), 2, 1120);

    // inserting an vector into another vector:
    v.insert(v.begin() + 1, t2.begin(), t2.end());
    // for(int it:v)
    //     cout<<" "<<it;

    // cout<<v.size();
    // v.pop_back();

    // cout << "\nThe front element of the vector: " << v.front();
    // cout << "\nThe last element of the vector: " << v.back();
    // cout << "\nThe size of the vector: " << v.size();
    // cout << "\nDeleting element from the end: " << v[v.size() - 1];
    // v.pop_back();

    // cout << "\nPrinting the vector after removing the last element:" << endl;
    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";

    // cout << "\nInserting 5 at the beginning:" << endl;
    // v.insert(v.begin(), 5);
    // cout << "The first element is: " << v[0] << endl;
    // cout << "Erasing the first element" << endl;
    // v.erase(v.begin());
    // cout << "Now the first element is: " << v[0] << endl;

    // if (v.empty())
    //     cout << "\nvector is empty";
    // else
    //     cout << "\nvector is not empty" << endl;

    // v.clear();
    // cout << "Size of the vector after clearing the vector: " << v.size();
}

void explainList()
{
    list<int> myList;
    myList.push_back(10);              // 10;
    myList.push_front(20);             // 20 10;
    myList.insert(myList.begin(), 30); // 30 20 10;   //insert needs an iterator
    myList.emplace_back(40);           // 30 20 10 40
    myList.emplace_front(50);          // 50 30 20 10 40
    for (auto it = myList.begin(); it != myList.end(); ++it)
    {
        std::cout << *it << " ";
    }

    cout << "\n\nSIZE of list: " << myList.size();
}

void explainDequeue()
{
    deque<int> dq;
    dq.push_back(10);          // 10;
    dq.push_front(20);         // 20 10;
    dq.insert(dq.begin(), 30); // 30 20 10;   //insert needs an iterator
    dq.emplace_back(40);       // 30 20 10 40
    dq.emplace_front(50);      // 50 30 20 10 40
    for (auto it = dq.begin(); it != dq.end(); ++it)
    {
        std::cout << *it << " ";
    }

    cout << "\n\nSIZE of Dequeue: " << dq.size();
}

void explainStack()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.emplace(60);
    cout << "\n\nSIZE of Stack: " << st.size();
    while (!st.empty())
    {
        cout << endl
             << st.top() << " ";
        st.pop();
    }

    cout << "\n\nSIZE of Stack: " << st.size();
}

void explainQueue()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.emplace(60);
    cout << "\n\nSIZE of Queue: " << q.size() << endl;
    // Display elements using front and back methods
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;
    while (!q.empty())
    {
        cout << endl
             << q.front() << " ";
        q.pop();
    }
    cout << "\n\nSIZE of Queue: " << q.size();
}

void explainPriorityQ()
{
    // Create a priority queue of integers
    priority_queue<int> pq;
    // this is called as max heap
    // Enqueue elements with priorities
    pq.push(30);    // Element: 30, Priority: default (higher priority) 30
    pq.push(10);    // Element: 10, Priority: default (higher priority) 10
    pq.emplace(50); // Element: 50, Priority: default (higher priority) 50 30 10
    pq.push(20);    // Element: 20, Priority: default (higher priority) 50 30 10 20
    pq.emplace(40); // Element: 40, Priority: default (higher priority) 50 40 30 10 20
    pq.emplace(15); // 50 40 30 20 15 10
    cout << "\n\nSIZE of PriorityQueue: " << pq.size() << endl;

    // Display elements of the priority queue
    cout << "Priority Queue elements: ";
    while (!pq.empty())
    {
        cout << pq.top() << " "; // Display the element with highest priority
        pq.pop();                // Remove the element with highest priority
    }
    cout << endl;
    cout << "\n\nSIZE of PriorityQueue: " << pq.size() << endl;

    // Create a priority queue of strings
    priority_queue<string> pq2;

    // Enqueue strings with priorities
    pq2.push("apple");
    pq2.push("banana");
    pq2.push("orange");
    pq2.push("kiwi");
    pq2.push("grape");

    // Display elements of the priority queue
    cout << "\n\nPriority Queue elements (Lexicographically sorted): ";
    while (!pq2.empty())
    {
        cout << pq2.top() << " "; // Display the string with highest priority
        pq2.pop();                // Remove the string with highest priority
    }
    cout << endl;

    // Create a priority queue of integers with custom comparator (std::greater)
    priority_queue<int, vector<int>, greater<int>> pq3;
    // this is called as min Heap
    // Enqueue elements with priorities
    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);
    pq.push(40);

    // Display elements of the priority queue
    cout << "Priority Queue elements (Min-Heap): ";
    while (!pq.empty())
    {
        cout << pq.top() << " "; // Display the element with highest priority
        pq.pop();                // Remove the element with highest priority
    }
    cout << endl;
}

void explainSet()
{
    set<int> mySet;
    // Insert elements into the set
    mySet.insert(10);
    mySet.insert(5);
    mySet.insert(20);
    mySet.insert(15);

    // Print the elements of the set
    std::cout << "Elements of the set:";
    for (auto it = mySet.begin(); it != mySet.end(); ++it)
    {
        std::cout << ' ' << *it;
    }
    std::cout << std::endl;

    // Size of the set
    std::cout << "Size of the set: " << mySet.size() << std::endl;

    // Check if an element exists in the set
    int elementToFind = 15;
    if (mySet.find(elementToFind) != mySet.end())
    {
        std::cout << elementToFind << " exists in the set." << std::endl;
    }
    else
    {
        std::cout << elementToFind << " does not exist in the set." << std::endl;
    }

    // Erase an element from the set
    mySet.erase(5);

    // Print the elements of the modified set
    std::cout << "Elements of the set after erasing 5:";
    for (auto it = mySet.begin(); it != mySet.end(); ++it)
    {
        std::cout << ' ' << *it;
    }
    std::cout << std::endl;

    // Clear the set
    mySet.clear();

    // Check if the set is empty
    if (mySet.empty())
    {
        std::cout << "The set is empty." << std::endl;
    }
    else
    {
        std::cout << "The set is not empty." << std::endl;
    }
}

void explainMultiset()
{
    // multiset<int> ms;
    // ms.insert(10);
    // ms.emplace(20);
    // ms.insert(20);
    // for (auto it = ms.begin(); it != ms.end(); ++it)
    // {
    //     cout << *it << endl;
    // }

    std::multiset<int> myMultiset = {10, 20, 30, 20};

    // Using const iterators obtained from cbegin() and cend()
    // std::cout << "Using const iterators obtained from cbegin() and cend():" << std::endl;
    // for (auto it = myMultiset.cbegin(); it != myMultiset.cend(); ++it)
    // {
    //     std::cout << *it << " ";
    // }
    // std::cout << std::endl;

    // // Using const reverse iterators obtained from crbegin() and crend()
    // std::cout << "Using const reverse iterators obtained from crbegin() and crend():" << std::endl;
    // for (auto it = myMultiset.crbegin(); it != myMultiset.crend(); ++it)
    // {
    //     std::cout << *it << " ";
    // }
    // std::cout << std::endl;
    myMultiset.emplace(20);
    for (auto it = myMultiset.cbegin(); it != myMultiset.cend(); ++it)
        cout << *it << endl;
    int cnt = myMultiset.count(20);
    cout << "count of element 20: " << cnt << endl;

    // myMultiset.erase(20);   //erases all occurences of 20
    //  now to remove only specifies no of occurences, use an iterator
    // myMultiset.erase(myMultiset.find(20));    //removes a single occurence

    auto it_start = myMultiset.find(20);
    auto it_end = myMultiset.find(20);
    std::advance(it_end, 2); // Move it_end two positions ahead

    // Check if the element exists before erasing
    if (it_start != myMultiset.end())
    {
        myMultiset.erase(it_start, it_end);
    }
    else
    {
        // Handle case when element doesn't exist
        // (e.g., print an error message)
    }

    for (auto it = myMultiset.cbegin(); it != myMultiset.cend(); ++it)
        cout << *it << endl;
}

void explainUnorderedSet()
{
    unordered_set<int> us;
    us.insert(5);   // Inserts the element 5 into the unordered_set
    us.emplace(10); // Inserts the element 10 into the unordered_set
    us.emplace(10);
    us.emplace(15);
    us.emplace(11);

    if (us.count(5))
    {
        std::cout << "Element 5 exists in the unordered_set." << std::endl;
    }
    else
    {
        std::cout << "Element 5 does not exist in the unordered_set." << std::endl;
    }
    for (const auto &elem : us)
    {
        std::cout << elem << std::endl;
    }
    std::cout << "Size of unordered_set: " << us.size() << std::endl;
    us.erase(5); // Removes the element 5 from the unordered_set

    for (auto it = us.cbegin(); it != us.cend(); ++it)
        cout << *it << endl;

    std::cout << "Size of unordered_set: " << us.size() << std::endl;
    us.clear(); // Removes all elements from the unordered_set
}

void explainMap()
{
    std::map<int, int> m1;
    map<int, pair<int, int>> m2;
    map<pair<int, int>, int> m3;

    m1[0] = 1;
    m1.insert({1, 2});
    m1.emplace(3, 2);
    // m1.emplace({2,3});

    cout << "key : value\n";
    for (auto it = m1.begin(); it != m1.end(); ++it)
    {
        std::cout << it->first << "   :    " << it->second << std::endl;
    }
    cout << m1[1];
    cout << endl
         << m1[2] << endl;
    auto it = m1.lower_bound(1);
    cout << (it)->second << endl;

    // std::map<int, std::string> myMap;

    // // Inserting elements into the map
    // myMap.insert(std::make_pair(1, "One"));
    // myMap.insert(std::make_pair(2, "Two"));
    // myMap.insert(std::make_pair(3, "Three"));
    // myMap.insert(std::make_pair(4, "Four"));
    // myMap.insert(std::make_pair(5, "Five"));

    // // Displaying the elements of the map
    // std::cout << "Elements of the map:" << std::endl;
    // for (const auto &pair : myMap)
    // {
    //     std::cout << pair.first << ": " << pair.second << std::endl;
    // }
}

void explainMultiMap()
{
    std::multimap<int, std::string> myMultiMap;

    // Inserting elements into the multimap
    myMultiMap.emplace(1, "One");
    myMultiMap.emplace(2, "Two");
    myMultiMap.emplace(2, "Second"); // Inserting a duplicate key
    myMultiMap.emplace(3, "Three");
    myMultiMap.emplace(3, "Third"); // Inserting a duplicate key

    // Displaying the elements of the multimap
    std::cout << "Elements of the multimap:" << std::endl;
    for (const auto &pair : myMultiMap)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

void explainUnorderedMap()
{
    // Creating an unordered_map with string keys and string values
    std::unordered_map<std::string, std::string> myUnorderedMap;

    // Inserting elements into the unordered_map
    myUnorderedMap["apple"] = "A fruit";
    myUnorderedMap["banana"] = "Another fruit";
    myUnorderedMap["carrot"] = "A vegetable";

    // Displaying the elements of the unordered_map
    std::cout << "Elements of the unordered_map:" << std::endl;
    for (const auto &pair : myUnorderedMap)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Searching for an element in the unordered_map
    std::string key = "banana";
    auto it = myUnorderedMap.find(key);
    if (it != myUnorderedMap.end())
    {
        std::cout << "Value associated with key '" << key << "': " << it->second << std::endl;
    }
    else
    {
        std::cout << "Key '" << key << "' not found in the unordered_map." << std::endl;
    }

    // Deleting an element from the unordered_map
    key = "carrot";
    size_t numErased = myUnorderedMap.erase(key);
    if (numErased > 0)
    {
        std::cout << "Element with key '" << key << "' deleted from the unordered_map." << std::endl;
    }
    else
    {
        std::cout << "Key '" << key << "' not found in the unordered_map." << std::endl;
    }
}

int main()
{

    // explainPair();
    // explainVector();
    // explainList();
    // explainDequeue();
    // explainStack();
    // explainQueue();
    // explainPriorityQ();
    // explainSet();
    // explainMultiset();
    // explainUnorderedSet();
    // explainMap();
    // explainMultiMap();
    explainUnorderedMap();
    // LOWER_BOUND and UPPER_BOUND
    // std::vector<int> vec = {1, 4, 5, 7, 9};

    // // Targets
    // std::vector<int> targets = {4, 6, 10};

    // std::cout << "Lower bound and upper bound results:" << std::endl;

    // // Performing lower_bound and upper_bound for each target
    // for (int target : targets) {
    //     auto lower = std::lower_bound(vec.begin(), vec.end(), target);
    //     auto upper = std::upper_bound(vec.begin(), vec.end(), target);

    //     // Outputting results
    //     std::cout << "Target: " << target << std::endl;
    //     if (lower != vec.end()) {
    //         std::cout << "Lower bound is at position: " << lower - vec.begin() << " with value: " << *lower << std::endl;
    //     } else {
    //         std::cout << "Lower bound is not found." << std::endl;
    //     }

    //     if (upper != vec.end()) {
    //         std::cout << "Upper bound is at position: " << upper - vec.begin() << " with value: " << *upper << std::endl;
    //     } else {
    //         std::cout << "Upper bound is not found." << std::endl;
    //     }

    //     std::cout << std::endl;
    // }

    return 0;
}