class BrowserHistory {
public:

    class Node {
    public:
        string data;
        Node* back;
        Node* next;

        Node(string url) {
            data = url;
            back = NULL;
            next = NULL;
        }
    };

    Node* currentpage;

    BrowserHistory(string homepage) {
        currentpage = new Node(homepage);
    }

    void visit(string url) {
        Node* newNode = new Node(url);

        currentpage->next = newNode;
        newNode->back = currentpage;

        currentpage = newNode;
    }

    string back(int steps) {
        while (steps) {
            if (currentpage->back) {
                currentpage = currentpage->back;
            }
            else {
                break;
            }

            steps--;
        }

        return currentpage->data;
    }

    string forward(int steps) {
        while (steps) {
            if (currentpage->next) {
                currentpage = currentpage->next;
            }
            else {
                break;
            }

            steps--;
        }

        return currentpage->data;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */