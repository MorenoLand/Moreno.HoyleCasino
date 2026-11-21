// FUN_00650730  00650730

void __fastcall FUN_00650730(int *param_1)

{
  void *pvVar1;
  
  (**(code **)(*param_1 + 0x204))(0);
  if (param_1[0xf] == 0) {
    FUN_005e9f20("false","..\\casinoShell\\room.cpp",0x630);
  }
  else {
    pvVar1 = (void *)param_1[0xf];
    if (pvVar1 != (void *)0x0) {
      FUN_00651950();
      operator_delete(pvVar1);
    }
    param_1[0xf] = 0;
  }
  (**(code **)(*param_1 + 0x84))(0);
  (**(code **)(*param_1 + 0x17c))(1,1);
  return;
}

