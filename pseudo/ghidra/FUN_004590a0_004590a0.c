// FUN_004590a0  004590a0

int FUN_004590a0(int param_1,undefined4 param_2,char param_3,undefined2 param_4)

{
  char cVar1;
  int local_30 [11];
  
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0xfffffff1;
  local_30[3] = 0xfffffff1;
  local_30[4] = 0xffffffba;
  local_30[5] = 0x10e;
  local_30[6] = 0x10e;
  local_30[7] = 0x55;
  local_30[8] = 0x55;
  local_30[9] = 0x55;
  local_30[10] = local_30[param_1];
  if (param_3 != '\0') {
    cVar1 = FUN_00461220(param_1,param_4);
    if (cVar1 != '\0') {
      local_30[10] = local_30[10] + 0x19;
    }
  }
  return local_30[10];
}

