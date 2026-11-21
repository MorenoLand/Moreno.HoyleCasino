// FUN_005712d0  005712d0

void __fastcall FUN_005712d0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005fc360();
  if (iVar1 == 0) {
    iVar1 = FUN_005f3e50();
    iVar1 = (param_1[9] - iVar1) / 0x3c;
    iVar2 = iVar1 / 0x3c;
    iVar1 = iVar1 % 0x3c;
    (**(code **)(**(int **)(param_1[8] + 0x184) + 0xb0))(iVar2);
    (**(code **)(**(int **)(param_1[8] + 0x188) + 0xb0))(iVar1 / 10);
    (**(code **)(**(int **)(param_1[8] + 0x18c) + 0xb0))(iVar1 % 10);
    if ((iVar1 == 0) && (iVar2 == 0)) {
      *(undefined1 *)(param_1[8] + 400) = 1;
      FUN_0056f480();
    }
    else {
      (**(code **)(*param_1 + 4))(0);
      (**(code **)(*param_1 + 0x1c))(5);
    }
  }
  else {
    FUN_005e9f20("false","..\\Casino\\roadkillslot.cpp",0x66a);
  }
  return;
}

