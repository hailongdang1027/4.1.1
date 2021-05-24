#include <iostream>
#include "Application.h"

using namespace std;int main(){        
  application ob_application(nullptr);        
  ob_application.buildTree();        
  return ob_application.execApp();
}
