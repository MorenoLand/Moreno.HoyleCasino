// FUN_005366d0  005366d0

void __fastcall FUN_005366d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_8;
  
  iVar2 = 0;
  do {
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      uVar1 = FUN_00536b40(local_8);
      *(undefined4 *)(param_1 + 0x58 + local_8 * 4) = uVar1;
    }
    FUN_005362a0(param_1,iVar2);
    iVar2 = FUN_005361a0();
  } while (0 < iVar2);
  return;
}

