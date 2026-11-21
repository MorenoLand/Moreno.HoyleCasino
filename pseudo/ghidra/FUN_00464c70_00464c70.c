// FUN_00464c70  00464c70

int __fastcall FUN_00464c70(int param_1)

{
  char *pcVar1;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  pcVar1 = (char *)FUN_00464400(&local_5);
  if (*pcVar1 != *DAT_0079076c) {
    pcVar1 = (char *)FUN_00464400(&local_6);
    if (*pcVar1 == *DAT_00790754) {
      param_1 = param_1 + 2;
    }
    else {
      pcVar1 = (char *)FUN_00464400(&local_7);
      if (*pcVar1 == *DAT_00790764) {
        param_1 = param_1 + 4;
      }
      else {
        pcVar1 = (char *)FUN_00464400(&local_8);
        if (*pcVar1 == *DAT_00790770) {
          param_1 = param_1 + 6;
        }
        else {
          FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerCardBag.cpp",0xb5);
          param_1 = param_1 + 6;
        }
      }
    }
  }
  return param_1;
}

