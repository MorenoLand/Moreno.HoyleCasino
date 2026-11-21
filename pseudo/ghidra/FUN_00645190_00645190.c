// FUN_00645190  00645190

int __fastcall FUN_00645190(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_006450f0();
  iVar1 = FUN_006450a0(iVar1 + 1);
  iVar2 = (**(code **)(*param_1 + 0x54))();
  return iVar2 + iVar1;
}

