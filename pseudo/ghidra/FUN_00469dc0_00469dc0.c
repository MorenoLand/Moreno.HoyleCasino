// FUN_00469dc0  00469dc0

void __fastcall FUN_00469dc0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_0057ae30();
  FUN_0047aab0(0,0);
  (**(code **)(*param_1 + 0xd8))(0);
  FUN_005f87d0();
  FUN_00519a40(2);
  uVar1 = (**(code **)(**(int **)(*(int *)(DAT_00791eb8 + 0x9c) + 0x204) + 0xb8))();
  iVar2 = FUN_0064cab0(uVar1);
  if (*(int *)(DAT_00791364 + 0x410) < iVar2) {
    *(int *)(DAT_00791364 + 0x410) = iVar2;
  }
  return;
}

