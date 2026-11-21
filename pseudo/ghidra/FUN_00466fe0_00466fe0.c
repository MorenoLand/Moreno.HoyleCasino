// FUN_00466fe0  00466fe0

void __fastcall FUN_00466fe0(int *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00636610(param_1,1);
  if (iVar2 != 1) {
    (**(code **)(*param_1 + 0xd8))(0);
    FUN_005f87d0();
    FUN_005f2870();
    *(undefined1 *)(DAT_00791eb8 + 0xa8) = 1;
    cVar1 = FUN_005da7b0();
    if (cVar1 != '\0') {
      *(int *)(DAT_00791eb8 + 0x98) = *(int *)(DAT_00791eb8 + 0x98) + 1;
    }
    cVar1 = FUN_0047ac40();
    if (cVar1 != '\0') {
      FUN_0047ae60();
    }
  }
  return;
}

