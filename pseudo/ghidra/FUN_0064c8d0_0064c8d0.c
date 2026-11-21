// FUN_0064c8d0  0064c8d0

void FUN_0064c8d0(int param_1,int param_2,char *param_3,char param_4,char param_5,char param_6)

{
  char local_28 [28];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = param_1;
  if ((param_6 == '\0') || ((-1 < param_1 && (-1 < param_2)))) {
    if (param_5 != '\0') {
      strcpy(param_3,"$");
    }
  }
  else if (param_5 == '\0') {
    strcpy(param_3,"-");
  }
  else {
    strcpy(param_3,"-$");
  }
  if (local_8 < 0) {
    local_8 = -local_8;
  }
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  if (local_8 < 1000000000) {
    if (local_8 < 1000000) {
      if (local_8 < 1000) {
        sprintf(local_28,"%d",local_8,param_2);
      }
      else {
        sprintf(local_28,"%d,%.3d",local_8 / 1000,local_8 % 1000);
      }
    }
    else {
      sprintf(local_28,"%d,%.3d,%.3d",local_8 / 1000000,(local_8 % 1000000) / 1000,local_8 % 1000);
    }
  }
  else {
    sprintf(local_28,"%d,%.3d,%.3d,%.3d",local_8 / 1000000000,(local_8 % 1000000000) / 1000000,
            (local_8 % 1000000) / 1000,local_8 % 1000);
  }
  strcat(param_3,local_28);
  if (param_4 != '\0') {
    sprintf(local_28,".%.2d",param_2);
    strcat(param_3,local_28);
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

