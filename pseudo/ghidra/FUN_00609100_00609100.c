// FUN_00609100  00609100

uint FUN_00609100(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined1 local_9;
  undefined4 local_8;
  
  FUN_00683fb0(param_2,&local_18,&local_1c,&local_14,&local_8,&local_9);
  local_10 = alGetError();
  if (local_10 == 0) {
    alBufferData(param_1,local_18,local_1c,local_14,local_8);
    local_10 = alGetError();
    if (local_10 == 0) {
      FUN_00684180(local_18,local_1c,local_14,local_8);
      local_10 = alGetError();
      if (local_10 == 0) {
        local_10 = 0;
      }
      else {
        local_10 = local_10 & 0xffffff00;
      }
    }
    else {
      local_10 = local_10 & 0xffffff00;
    }
  }
  else {
    local_10 = local_10 & 0xffffff00;
  }
  return local_10;
}

