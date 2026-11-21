// FUN_00632f40  00632f40

int __fastcall FUN_00632f40(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 500))();
  iVar2 = (**(code **)(*param_1 + 0x1f8))();
  return iVar2 + iVar1;
}

