// FUN_00635d80  00635d80

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00635d80(char *param_1)

{
  char local_1184 [268];
  int *local_1078;
  char local_1074 [4096];
  char local_74 [108];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    strcpy(local_1074,param_1);
    strcat(local_1074,"#");
    strcpy(local_1184,"encore.inf");
    local_1078 = (int *)(**(code **)(*DAT_007960d8 + 0x20))(local_1184,"Ident");
    (**(code **)(*local_1078 + 0x10))("SubProductID",&PTR_006b27f8,local_74,100);
    if (local_74[0] == '\0') {
      (**(code **)(*local_1078 + 0x10))("ProductID",&PTR_006b27f8,local_74,100);
    }
    if (local_74[0] == '\0') {
      strcat(local_1074,"2000");
    }
    else {
      strcat(local_1074,local_74);
    }
    FUN_005ea220(param_1);
    if (local_1078 != (int *)0x0) {
      (**(code **)*local_1078)(1);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

