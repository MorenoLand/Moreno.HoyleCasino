// FUN_0062f470  0062f470

void __fastcall FUN_0062f470(int *param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)(**(code **)(*param_1 + 0x38))();
  if (pvVar1 == (void *)0x0) {
    FUN_0062fde0("StringManagerBase: no key found!\n");
    FUN_005e9f20("false","..\\scilib\\platform\\StringManagerBase.cpp",0x14a);
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x3c))();
    if (iVar2 == 0) {
      FUN_0062fde0("StringManagerBase: no value found for key \'%s\'!\n",pvVar1);
      FUN_005e9f20("false","..\\scilib\\platform\\StringManagerBase.cpp",0x153);
      operator_delete(pvVar1);
    }
    else {
      (**(code **)(*param_1 + 0x30))(pvVar1,iVar2);
    }
  }
  return;
}

