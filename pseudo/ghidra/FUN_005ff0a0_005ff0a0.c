// FUN_005ff0a0  005ff0a0

void __fastcall FUN_005ff0a0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_8;
  
  if (*(int *)(param_1 + 0x1bc) != 0) {
    local_8 = 0;
    while( true ) {
      iVar2 = FUN_005feda0();
      if (iVar2 <= local_8) break;
      uVar4 = 0;
      FUN_005ff080(local_8);
      FUN_005f5df0(uVar4);
      FUN_005ff080(local_8);
      cVar1 = FUN_006026d0();
      if (cVar1 != '\0') {
        piVar3 = (int *)FUN_005ff080(local_8);
        (**(code **)(*piVar3 + 0xd8))(0);
      }
      local_8 = local_8 + 1;
    }
    if (*(int *)(*(int *)(param_1 + 0x1bc) + 0x1b8) != -1) {
      piVar3 = (int *)FUN_005ff060(*(undefined4 *)(*(int *)(param_1 + 0x1bc) + 0x1b8));
      (**(code **)(*piVar3 + 0xd8))(3);
    }
  }
  return;
}

