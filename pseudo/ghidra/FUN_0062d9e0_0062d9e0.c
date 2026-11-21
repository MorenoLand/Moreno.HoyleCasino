// FUN_0062d9e0  0062d9e0

char * __thiscall FUN_0062d9e0(int *param_1,char *param_2)

{
  char *pcVar1;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    FUN_005e9f20("false","..\\scilib\\platform\\StringManager.cpp",0x3c);
    pcVar1 = s__uninitialized_string__00761fbc;
  }
  else {
    pcVar1 = (char *)(**(code **)(*param_1 + 0x5c))(param_2);
    if (pcVar1 == (char *)0x0) {
      FUN_0062fde0("String Resource: \"%s\" Not Found!\r\n",param_2);
      FUN_005e9f20("false","..\\scilib\\platform\\StringManager.cpp",0x44);
      pcVar1 = param_2;
    }
  }
  return pcVar1;
}

