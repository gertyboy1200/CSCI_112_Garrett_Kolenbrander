#include <iostream>

using namespace std;

class Person {
	string first,last;
	int FICO;
	int salary;
	public:
	Person(string _first="",string newLast="",int newFICO=0,int newSalary=0) {
		first=_first;
		last=newLast;
		FICO=newFICO;
		salary=newSalary;
	}
	bool operator <(const Person &other) const {
		/*if (last==other.last) 
		  return first<other.first;
		else
		  return last<other.last;*/
		return FICO<other.FICO;
	}
	friend ostream & operator <<(ostream &out,const Person &p) {
		return out << "First: " << p.first << " Last: " << p.last <<endl
		  << "FICO: " << p.FICO << " Salary: " << p.salary << endl;
	}
	//friend istream & operator >>(istream &in,Person &p) {
	//}
	bool operator >(const Person &other) const {
		return other<(*this);
	}
	bool operator !=(const Person &other) const {
		return other<(*this) || (*this)<other;
	}
	bool operator ==(const Person &other) const {
		return !((*this)!=other);
	}
	bool operator <=(const Person &other) const {
		return (*this)<other || (*this)==other;
	}
	bool operator >=(const Person &other) const {
		return (*this)>other || (*this)==other;
	}
};

//Karl 420
//Kim 820
//Kaleb 100


	// log2(1 000 000)  -> log(1 000 000)/log(2) 
	
//	name="C2",value="=3 4 + C2 -!"
// map<CellName,SpreadSheetCell>

class BinaryNode {
	Person p;
	//string key,value;
	//pair<Person,Person>
	//map<Person,Person>
	BinaryNode *left,*right;      // less , more
	public:
	BinaryNode(const Person &newP,BinaryNode *newLeft=NULL,BinaryNode *newRight=NULL) {
		p=newP;
		left=newLeft;
		right=newRight;
	}
	BinaryNode(const BinaryNode &other) {
		// Walk the binary tree in infix order
		// Left then node itself then Right side
	}
			/*           A
			 *          / \
			 *         B   C
			 *        /  \  \
			 *        D   E  J
			 *       /   / \
			 *      F    H  I
			 */ 
	/*
	void remove(const Person &target,BinaryNode *parent=NULL) {
		parent=this;
		if (p==target) {
/* Somewhat understandable version			  
              // 2 Children
			  if (left!=NULL && right!=NULL) {
				left->add(right);
				if (parent->left==this) parent->left=left;
				if (parent->right==this) parent->right=left; 
			  } 
			  // 0 or 1 child
			  else {
				  BinaryNode *child=NULL;
				  if (right!=NULL) child=right;
				  if (left!=NULL) child=left;
				  if (parent->left==this) parent->left=child;
				  if (parent->right==this) parent->right=child; 
			  }
           BinaryNode *child=NULL;
			  if (left!=NULL && right!=NULL) {
				left->add(right);
				child=left;
              }
			  else if (right!=NULL) child=right;
		      else if (left!=NULL) child=left;
			  if (parent->left==this) parent->left=child;
			  if (parent->right==this) parent->right=child; 
			  delete this;
		}
		if (target<p) {
			if (left!=NULL) return left->remove(target,this);
		} else {
			if(right!=NULL) return right->remove(target,this);
		}
	}
	*/
	void add(BinaryNode *subtree) {
		if (subtree->p<p) { // go to the left
			if (left==NULL) left=subtree;
			else left->add(subtree);
		} else {  // go to the right
			if (right==NULL) right=subtree;
			else right->add(subtree);
		}
	}
	void add(const Person &newP){
		BinaryNode *temp=new BinaryNode(newP);
		add(temp);
	}
	Person find(int FICO) {
		Person target("","",FICO);
		if (p==target) return p;
		if (target<p) {
			if (left!=NULL) return left->find(FICO);
			else return target;
		} else {
			if(right!=NULL) return right->find(FICO);
			else return target;
		}
	}
	friend ostream & operator <<(ostream &out,const BinaryNode *value) {
		out << value->p << 
		  "left" << hex << (long)value->left << 
		  "right " << hex << (long)value->right << dec << endl;
		  if (value->left!=NULL) out << value->left;
		  if (value->right!=NULL) out << value->right;
		return out;
	} 
};

/*           Karl 420
           /       \
      Kaleb 100     Kim 820
                    /
                 John 560
*/
int main() {
  BinaryNode root(Person("Karl","Castleton",420,80000));
  cout<< "------" << endl;
  
  root.add(Person("Kim","Castleton",820,65000));
  root.add(Person("Kaleb","Castleton",100,20000));
  cout << "------" <<endl;

  root.add(Person("John","Doe",560,40000));
  cout << "------" <<endl << &root;  

  Person p=root.find(820);
  cout << p;
  
 /* cout << "Removing Kaleb" << endl;
  root.remove(Person("","",820,0));
  cout << "Removing Kim" << endl;
  cout << &root;
  root.remove(Person("","",100,0));
  cout << &root;
  */
}
