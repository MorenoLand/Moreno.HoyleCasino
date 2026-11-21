// FUN_00653bd0  00653bd0

void __thiscall FUN_00653bd0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  iVar2 = FUN_006352f0(param_2);
  if (iVar2 != 0) {
    if ((param_2 < 0) || (iVar2 = (**(code **)(*DAT_0162ee84 + 0xec))(), iVar2 <= param_2)) {
      FUN_005e9f20("false","..\\casinoShell\\statisticsdialog.cpp",0xb2);
    }
    else {
      *(int *)(param_1 + 0x570) = param_2;
      for (local_8 = 1; local_8 < 100; local_8 = local_8 + 1) {
        FUN_005fbd40(0,local_8);
      }
      FUN_005fbd10(0,0);
      FUN_005fbdd0(0,1);
      FUN_005fbe60(0,4);
      FUN_005fbe30(0,0);
      FUN_005fbe30(0,1);
      for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
        FUN_005fbe90(0,local_8);
      }
      *(undefined1 *)(param_1 + 0x1bc) = 0;
      piVar3 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(param_2);
      (**(code **)(*piVar3 + 0x54))(param_1,param_1 + 0x1c0);
      *(undefined1 *)(param_1 + 0x1bc) = 1;
      cVar1 = FUN_00653e00();
      if (cVar1 != '\0') {
        FUN_00653d40(param_2);
      }
    }
  }
  return;
}

