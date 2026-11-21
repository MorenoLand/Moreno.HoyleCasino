// FUN_0061f1c0  0061f1c0

undefined4 __thiscall
FUN_0061f1c0(int param_1,int param_2,void *param_3,char param_4,uint param_5,undefined1 param_6,
            undefined1 param_7)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_c;
  void *local_8;
  
  if ((param_2 < 0) || (4 < param_2)) {
    uVar2 = 0;
  }
  else {
    if (param_4 == '\0') {
      local_8 = param_3;
      local_c = (uint)CONCAT21(local_c._2_2_,param_7) << 8;
    }
    else {
      if ((int)param_5 < 1) {
        return 0;
      }
      local_8 = operator_new(param_5);
      memcpy(local_8,param_3,param_5);
      local_c = CONCAT22(local_c._2_2_,0x100);
    }
    local_c = CONCAT31(local_c._1_3_,param_6);
    if (((*(int *)(param_1 + 0xc + param_2 * 8) != 0) &&
        (*(char *)(param_1 + 8 + param_2 * 8) != '\0')) &&
       (cVar1 = FUN_0061f320(param_2), cVar1 == '\0')) {
      if (param_4 != '\0') {
        operator_delete(local_8);
      }
      return 0;
    }
    *(int *)(param_1 + 8 + param_2 * 8) = local_c;
    *(void **)(param_1 + 0xc + param_2 * 8) = local_8;
    uVar2 = 1;
  }
  return uVar2;
}

