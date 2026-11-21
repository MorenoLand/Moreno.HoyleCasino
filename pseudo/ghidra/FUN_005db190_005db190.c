// FUN_005db190  005db190

uint __fastcall FUN_005db190(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  cVar1 = FUN_005da7b0();
  if (cVar1 == '\0') {
    uVar3 = 1;
  }
  else {
    iVar2 = FUN_005daec0();
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    else {
      *(int *)(DAT_007947e0 + 0x4ef8) = *(int *)(DAT_007947e0 + 0x4ef8) + 1;
      cVar1 = (**(code **)(*param_1 + 0x2d0))();
      if (cVar1 == '\0') {
        uVar3 = *(int *)(DAT_007947e0 + 0x4ef8) - 1;
        *(uint *)(DAT_007947e0 + 0x4ef8) = uVar3;
        uVar3 = uVar3 & 0xffffff00;
      }
      else {
        iVar2 = *(int *)(DAT_007947e0 + 0x4ef8) + -1;
        *(int *)(DAT_007947e0 + 0x4ef8) = iVar2;
        uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),1);
      }
    }
  }
  return uVar3;
}

