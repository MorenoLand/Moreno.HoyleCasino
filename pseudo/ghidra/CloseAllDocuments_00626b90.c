// CloseAllDocuments  00626b90

/* Library Function - Single Match
    public: void __thiscall CWinApp::CloseAllDocuments(int)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug */

void __thiscall CWinApp::CloseAllDocuments(CWinApp *this,int param_1)

{
  if (*(int *)(this + 0x5c) != 0) {
    (**(code **)(**(int **)(this + 0x5c) + 0x6c))(param_1);
  }
  return;
}

