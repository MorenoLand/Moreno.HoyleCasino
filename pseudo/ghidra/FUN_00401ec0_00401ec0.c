// FUN_00401ec0  00401ec0

void __thiscall FUN_00401ec0(undefined4 param_1,char *param_2,int param_3,int param_4)

{
  char *_Format;
  
  if (param_3 < 8) {
    sprintf(param_2,"%d",param_3,param_1);
  }
  else if (param_4 == 2) {
    _Format = (char *)FUN_00630f40("SID_BACCARAT_NATURAL_FORMAT",param_3);
    sprintf(param_2,_Format,param_3,param_1);
  }
  else {
    sprintf(param_2,"%d",param_3,param_1);
  }
  return;
}

