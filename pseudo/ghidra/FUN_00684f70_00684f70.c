// FUN_00684f70  00684f70

longlong FUN_00684f70(int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (((1 < *(int *)(param_1 + 0x58)) && (*(int *)(param_1 + 4) != 0)) &&
     (iVar1 = *(int *)(param_1 + 0x34), param_2 < iVar1)) {
    if (-1 < param_2) {
      return CONCAT44(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0xc + param_2 * 0x10),
                      *(undefined4 *)(*(int *)(param_1 + 0x44) + 8 + param_2 * 0x10));
    }
    lVar4 = 0;
    iVar3 = 0;
    lVar2 = 0;
    if (0 < iVar1) {
      do {
        lVar4 = FUN_00684f70(param_1,iVar3);
        lVar4 = lVar4 + lVar2;
        iVar3 = iVar3 + 1;
        lVar2 = lVar4;
      } while (iVar3 < iVar1);
    }
    return lVar4;
  }
  return -0x83;
}

