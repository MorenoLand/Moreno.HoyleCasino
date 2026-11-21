// FUN_0062ce60  0062ce60

undefined4 __thiscall FUN_0062ce60(int *param_1,char *param_2,char *param_3)

{
  char *_Memory;
  int iVar1;
  undefined4 uVar2;
  char *local_20;
  char *local_1c;
  char *local_18;
  
  _Memory = _strdup(param_2);
  FUN_005ea5b0(_Memory);
  iVar1 = FUN_005ea9c0(_Memory,&DAT_006c2d28);
  *param_1 = iVar1;
  if (*param_1 == 0) {
    free(_Memory);
    sprintf(param_3,"Could not open Ogg file.");
    uVar2 = 0xffffffff;
  }
  else {
    free(_Memory);
    iVar1 = FUN_00684ed0(*param_1,param_1 + 2,0,0);
    if (iVar1 < 0) {
      fclose((FILE *)*param_1);
      uVar2 = FUN_0062d750(iVar1);
      sprintf(param_3,"Could not open Ogg stream:\n%s",uVar2);
      uVar2 = 0xfffffffe;
    }
    else {
      iVar1 = FUN_00685dd0(param_1 + 2,0xffffffff);
      param_1[0xb6] = iVar1;
      iVar1 = FUN_00685e10(param_1 + 2,0xffffffff);
      param_1[0xb7] = iVar1;
      if (*(int *)(param_1[0xb6] + 4) == 1) {
        param_1[0xbb] = 0x1101;
      }
      else {
        param_1[0xbb] = 0x1103;
      }
      iVar1 = alGetError();
      if (iVar1 < 0) {
        fclose((FILE *)*param_1);
        uVar2 = FUN_0062d750(iVar1);
        sprintf(param_3,"OpenAL error was raised:\n%s",uVar2);
        if (param_1[3] == 0) {
          local_18 = "FALSE";
        }
        else {
          local_18 = "TRUE";
        }
        if (param_1[0xb7] == 0) {
          local_1c = "is NULL";
        }
        else {
          local_1c = "appears valid";
        }
        if (param_1[0xb6] == 0) {
          local_20 = "is NULL";
        }
        else {
          local_20 = "appears valid";
        }
        uVar2 = FUN_0062d750(iVar1);
        sprintf(param_3,
                "ogg_stream::open:\n\tm_vorbisInfo %s\n\tm_vorbisComment is %s\n\tvf->seekable=%s\n"
                ,uVar2,local_20,local_1c,local_18);
        uVar2 = 0xfffffffd;
      }
      else {
        alSource3f(param_1[0xba],0x1004,0,0,0);
        alSource3f(param_1[0xba],0x1006,0,0,0);
        alSource3f(param_1[0xba],0x1005,0,0,0);
        alSourcef(param_1[0xba],0x1021,0);
        alSourcei(param_1[0xba],0x202,1);
        sprintf(param_3,"No error.");
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

