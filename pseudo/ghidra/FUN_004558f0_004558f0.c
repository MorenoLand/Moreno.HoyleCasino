// FUN_004558f0  004558f0

short FUN_004558f0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  undefined4 local_1c [2];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c[0] = 0xffffffff;
  local_14 = 0xffffffff;
  FUN_004517a0(&local_10,&local_8,&local_c);
  cVar1 = FUN_00451c20(local_c,local_10,local_8,local_1c,&local_14);
  if (cVar1 == '\0') {
    cVar1 = FUN_00451870(local_c,local_10,local_8,local_1c,&local_14);
    if (cVar1 == '\0') {
      sVar2 = FUN_00455740(param_1,param_2);
      sVar2 = sVar2 + 2;
    }
    else {
      FUN_0044f840(local_1c[0],local_14,param_1,param_2);
      sVar2 = 1;
    }
  }
  else {
    FUN_0044f840(local_1c[0],local_14,param_1,param_2);
    sVar2 = 0;
  }
  return sVar2;
}

