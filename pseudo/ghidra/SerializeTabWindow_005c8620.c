// SerializeTabWindow  005c8620

/* Library Function - Single Match
    public: virtual void __thiscall CBaseTabbedPane::SerializeTabWindow(class CArchive &)
   
   Library: Visual Studio 2010 Debug */

void __thiscall CBaseTabbedPane::SerializeTabWindow(CBaseTabbedPane *this,CArchive *param_1)

{
  if (*(int *)(this + 0x80) != 0) {
    (**(code **)(**(int **)(this + 0x80) + 0xc))(param_1);
  }
  return;
}

