// FUN_0062fd00  0062fd00

undefined4 FUN_0062fd00(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  void *_Dst;
  int iVar2;
  undefined4 local_8;
  
  if (((param_1 == 0) || (param_2 < 1)) || (param_3 == 0)) {
    uVar1 = 0;
  }
  else {
    _Dst = operator_new(param_3);
    while (local_8 = param_2 + -1, 0 < local_8) {
      iVar2 = FUN_0062fc30(0,local_8);
      memcpy(_Dst,(void *)(iVar2 * param_3 + param_1),param_3);
      memcpy((void *)(iVar2 * param_3 + param_1),(void *)(local_8 * param_3 + param_1),param_3);
      memcpy((void *)(local_8 * param_3 + param_1),_Dst,param_3);
      param_2 = local_8;
    }
    operator_delete(_Dst);
    uVar1 = 1;
  }
  return uVar1;
}

