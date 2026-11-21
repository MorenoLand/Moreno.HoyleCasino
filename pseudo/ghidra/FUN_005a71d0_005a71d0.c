// FUN_005a71d0  005a71d0

undefined4 FUN_005a71d0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 local_18 [5];
  
  local_18[0] = 0x138a;
  local_18[1] = 0x138b;
  local_18[2] = 0x1389;
  local_18[3] = 0x138c;
  local_18[4] = 0x138f;
  if (((param_1 < 4) && (param_3 == 2)) && (cVar1 = FUN_005b60a0(param_1,param_2), cVar1 != '\0')) {
    return 0x1390;
  }
  return local_18[param_1];
}

