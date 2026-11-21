// Get  005fb480

/* Library Function - Single Match
    public: void * __thiscall CPropertySection::Get(unsigned long,unsigned long *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

void * __thiscall CPropertySection::Get(CPropertySection *this,ulong param_1,ulong *param_2)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_005fb430(param_2);
  if (iVar1 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_005ff940(param_1);
  }
  return pvVar2;
}

