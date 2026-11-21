// FUN_00545920  00545920

void __fastcall FUN_00545920(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00548f80(0);
  iVar2 = FUN_0054a310();
  if (iVar2 == 5) {
    FUN_005eaf00(0x3116d2);
    (**(code **)(**(int **)(param_1 + 0x10) + 0x44))((-(uint)(iVar1 != 2) & 0xd) + 0x139,0x60);
    (**(code **)(**(int **)(param_1 + 0x10) + 0x74))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x70))();
  }
  return;
}

