// FUN_0062f180  0062f180

uchar * __thiscall FUN_0062f180(int *param_1,int param_2,uchar *param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 local_10;
  uchar *local_c;
  int local_8;
  
  local_c = param_3;
  local_8 = param_2;
  local_10 = FUN_0062ee80();
  if ((*(char *)((int)param_1 + 0x3f) != '\0') && (local_10 == 0x22)) {
    local_8 = 0x22;
  }
  while( true ) {
    if (local_8 == 0x20) {
      cVar1 = (**(code **)(*param_1 + 0x18))(local_10);
      bVar2 = cVar1 == '\0';
    }
    else {
      bVar2 = local_10 != local_8;
    }
    if ((!bVar2) || (cVar1 = (**(code **)(*param_1 + 0x1c))(local_10), cVar1 != '\0')) break;
    if (param_3 + param_4 + -1 <= local_c) {
      FUN_0062fde0("StringManagerBase: buffer length exceeded!\n");
      FUN_005e9f20("false","..\\scilib\\platform\\StringManagerBase.cpp",0xea);
      if (((param_3 <= local_c + -1) && (local_c[-1] = '.', param_3 <= local_c + -2)) &&
         (local_c[-2] = '.', param_3 <= local_c + -3)) {
        local_c[-3] = '.';
      }
      *local_c = '\0';
      return param_3;
    }
    if (local_10 < 0x100) {
      *local_c = (uchar)local_10;
    }
    else if (local_10 < 0x10000) {
      *(undefined2 *)local_c = (undefined2)local_10;
    }
    else {
      *local_c = (uchar)local_10;
      local_c[1] = local_10._1_1_;
      local_c[2] = local_10._2_1_;
      FUN_005e9f20("false","..\\scilib\\platform\\StringManagerBase.cpp",0x109);
    }
    local_c = _mbsinc(local_c);
    if ((*(char *)param_1[9] == '\0') || ((uint)(param_1[8] + param_1[10]) <= (uint)param_1[9])) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) break;
    local_10 = FUN_0062ee80();
  }
  *local_c = '\0';
  return param_3;
}

