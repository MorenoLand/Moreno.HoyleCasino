// FUN_00616c20  00616c20

int __thiscall FUN_00616c20(int param_1,char *param_2,int param_3,int param_4)

{
  char *_Str;
  char *_Str_00;
  size_t sVar1;
  char *local_30;
  int local_28;
  undefined **local_1c;
  undefined4 local_14;
  char local_d;
  char *local_c;
  int local_8;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    FUN_005ea5b0(param_1 + 0x38);
    local_30 = strrchr((char *)(param_1 + 0x38),0x5c);
    local_c = (char *)(param_1 + 0x38);
    while ((_Str = strstr(local_c,"-l"), _Str != (char *)0x0 &&
           ((local_30 == (char *)0x0 || (local_30 <= _Str))))) {
      _Str_00 = strrchr(_Str,0x2e);
      if (_Str_00 == (char *)0x0) {
        *_Str = '\0';
      }
      else {
        sVar1 = strlen(_Str_00);
        memmove(_Str,_Str_00,sVar1 + 1);
      }
    }
    local_1c = (undefined **)strrchr((char *)(param_1 + 0x38),0x2e);
    if (((local_30 != (char *)0x0) && (local_1c != (undefined **)0x0)) && (local_1c < local_30)) {
      local_1c = (undefined **)0x0;
    }
    local_d = '\0';
    if (local_1c == (undefined **)0x0) {
      local_1c = &PTR_006b27f8;
    }
    else {
      local_d = *(char *)local_1c;
      *(char *)local_1c = '\0';
      local_1c = (undefined **)((int)local_1c + 1);
    }
    sprintf(param_2,"%s-l%dc%d%c%s",param_1 + 0x38,param_3,param_4,(int)local_d,local_1c);
    if (*(char *)local_1c != '\0') {
      *(char *)((int)local_1c + -1) = local_d;
    }
    local_14 = 0;
    if (local_30 == (char *)0x0) {
      local_30 = (char *)(param_1 + 0x38);
    }
    else {
      local_30 = local_30 + 1;
    }
    sscanf(local_30,"%d",&local_14);
    local_8 = FUN_005ea9c0(param_2,&DAT_006c2d28);
    if (((local_8 == 0) && (param_3 == 0)) && (param_4 == 0)) {
      strcpy(param_2,(char *)(param_1 + 0x38));
      local_8 = FUN_005ea9c0(param_2,&DAT_006c2d28);
    }
    if (local_8 != 0) {
      if (*(int *)(param_1 + 0x34) != 0) {
        return local_8;
      }
      *(undefined4 *)(param_1 + 0x34) = local_14;
      return local_8;
    }
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    sprintf(param_2,"debug\\%d-l%dc%d.tga",*(undefined4 *)(param_1 + 0x34),param_3,param_4);
    FUN_005ea5b0(param_2);
    local_28 = FUN_005ea9c0(param_2,&DAT_006c2d28);
    if (((local_28 == 0) && (param_3 == 0)) && (param_4 == 0)) {
      sprintf(param_2,"debug\\%d.tga",*(undefined4 *)(param_1 + 0x34));
      FUN_005ea5b0(param_2);
      local_28 = FUN_005ea9c0(param_2,&DAT_006c2d28);
    }
    if (local_28 != 0) {
      return local_28;
    }
  }
  return 0;
}

