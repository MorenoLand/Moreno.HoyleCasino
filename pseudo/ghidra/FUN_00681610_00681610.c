// FUN_00681610  00681610

void FUN_00681610(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *local_18;
  int local_c;
  
  if (((DAT_01631853 == '\0') && (DAT_0162ee84 != (int *)0x0)) &&
     (cVar2 = (**(code **)(*DAT_0162ee84 + 0x98))(), cVar2 != '\0')) {
    DAT_01631853 = '\x01';
  }
  if (param_1 != 0) {
    if (DAT_01631853 != '\0') {
      FUN_0062fde0("Block DeAllocated:\tAllocNumber %5i\tSize %5i\tPtr 0x%lx\tBase 0x%lx\r\n",
                   *(undefined2 *)(param_1 + -0xc),*(undefined4 *)(param_1 + -8),param_1,
                   *(undefined4 *)(param_1 + -4));
    }
    DAT_007950a8 = DAT_007950a8 - *(int *)(param_1 + -8);
    DAT_007950b0 = DAT_007950b0 + -1;
    if (*(int *)(param_1 + -8) + 0x20U < 0x101) {
      iVar3 = *(int *)(param_1 + -8) + 0x20;
      DAT_01630704 = DAT_01630704 + -1;
      local_c = iVar3 / 10;
      if (DAT_0078142c <= local_c) {
        local_c = DAT_0078142c + -1;
      }
      *(int *)(&DAT_01630708 + local_c * 4) = *(int *)(&DAT_01630708 + local_c * 4) + -1;
      local_18 = (undefined4 *)0x0;
      if (iVar3 < 0x41) {
        local_18 = &DAT_01630bbc;
      }
      else if (iVar3 < 0x81) {
        local_18 = &DAT_01630bb8;
      }
      else if (iVar3 < 0x101) {
        local_18 = &DAT_01630700;
      }
      puVar1 = *(undefined4 **)(param_1 + -4);
      *puVar1 = 0xdddddddd;
      puVar1[1] = 0xabcdabcd;
      puVar1[2] = *local_18;
      *local_18 = puVar1;
    }
    else {
      FUN_00666580(*(undefined4 *)(param_1 + -4));
    }
  }
  return;
}

