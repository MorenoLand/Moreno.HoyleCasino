// FUN_00604400  00604400

int __thiscall FUN_00604400(undefined4 param_1,int param_2,char *param_3)

{
  int iVar1;
  int local_8;
  
  local_8 = FUN_0062ac30(param_1);
  while( true ) {
    if (local_8 == 0) {
      return 0;
    }
    if ((*(int *)(*(int *)(local_8 + 8) + 0x30) == param_2) &&
       (iVar1 = strcmp((char *)(*(int *)(local_8 + 8) + 0x38),param_3), iVar1 == 0)) break;
    local_8 = FUN_0062ace0();
  }
  return local_8;
}

