// FUN_0061d0d0  0061d0d0

undefined1
FUN_0061d0d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,byte param_6)

{
  undefined1 local_c;
  byte local_7;
  undefined1 local_6;
  byte local_5;
  
  FUN_0061d290(param_1,param_2,param_3,param_4,param_5,&local_6,&local_5,&local_7);
  if ((local_7 == 4) && (param_6 <= local_5)) {
    local_c = 1;
  }
  else if ((local_7 == 2) || (local_7 == 8)) {
    local_c = 1;
  }
  else {
    local_c = 0;
  }
  return local_c;
}

