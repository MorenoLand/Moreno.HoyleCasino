// FUN_00645150  00645150

int __fastcall FUN_00645150(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_006450f0();
  iVar1 = FUN_00645050(iVar1 + 1);
  iVar2 = (**(code **)(*param_1 + 0x4c))();
  return iVar2 + iVar1;
}

