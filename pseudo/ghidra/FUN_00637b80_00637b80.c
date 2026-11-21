// FUN_00637b80  00637b80

undefined4 __thiscall FUN_00637b80(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 < 0x24b47d) {
    if (param_2 == 0x24b47c) {
      uVar2 = FUN_00630f40("SID_SHELL_BACKGROUNDMUSIC_PIANOSOLO",0x24b47c,param_1);
      return uVar2;
    }
    param_2 = param_2 + -0x24b288;
    switch(param_2) {
    case 0:
      uVar2 = FUN_00630f40("SID_SHELL_BACKGROUNDMUSIC_OUTDOORS",param_2,param_1);
      break;
    case 1:
      uVar2 = FUN_00630f40("SID_SHELL_BACKGROUNDMUSIC_STORM",param_2,param_1);
      break;
    case 2:
      uVar2 = FUN_00630f40("SID_SHELL_BACKGROUNDMUSIC_RIO",param_2,param_1);
      break;
    case 3:
      uVar2 = FUN_00630f40("SID_SHELL_BACKGROUNDMUSIC_CRUISIN",param_2,param_1);
      break;
    case 4:
      uVar2 = FUN_00630f40("SID_SHELL_BACKGROUNDMUSIC_ANTICIPATION",param_2,param_1);
      break;
    case 5:
      uVar2 = FUN_00630f40("SID_SHELL_BACKGROUNDMUSIC_DETECTIVE",param_2,param_1);
      break;
    case 6:
      uVar2 = FUN_00630f40("SID_SHELL_BACKGROUNDMUSIC_SNAKEYJAKE",param_2,param_1);
      break;
    case 7:
      uVar2 = FUN_00630f40("SID_SHELL_BACKGROUNDMUSIC_EASTERN",param_2,param_1);
      break;
    case 8:
      uVar2 = FUN_00630f40("SID_SHELL_BACKGROUNDMUSIC_ORBIT",param_2,param_1);
      break;
    default:
code_r0x00637d54:
      FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0xa88);
      uVar2 = 0;
      break;
    case 0xf:
      uVar2 = FUN_00630f40("SID_SHELL_BACKGROUNDMUSIC_NEWAGE",param_2,param_1);
      break;
    case 0x10:
      uVar2 = FUN_00630f40("SID_SHELL_BACKGROUNDMUSIC_DIGITALDREAM",param_2,param_1);
      break;
    case 0x11:
      uVar2 = FUN_00630f40("SID_SHELL_BACKGROUNDMUSIC_GROOVYMOOD",param_2,param_1);
      break;
    case 0x12:
      uVar2 = FUN_00630f40("SID_SHELL_BACKGROUNDMUSIC_JAZZMAN",param_2,param_1);
      break;
    case 0x13:
      uVar2 = FUN_00630f40("SID_SHELL_BACKGROUNDMUSIC_OCEAN",param_2,param_1);
    }
  }
  else {
    iVar1 = param_2 + -0x24b486;
    switch(param_2) {
    case 0x24b486:
      uVar2 = FUN_00630f40("SID_SHELL_BACKGROUNDMUSIC_FLOATING",iVar1,param_1);
      break;
    default:
      goto code_r0x00637d54;
    case 0x24b4a4:
      uVar2 = FUN_00630f40("SID_SHELL_BACKGROUNDMUSIC_ELECTROMUSIC",iVar1,param_1);
      break;
    case 0x24b4ae:
      uVar2 = FUN_00630f40("SID_SHELL_BACKGROUNDMUSIC_MODERNGROOVE",iVar1,param_1);
      break;
    case 0x24b4b8:
      uVar2 = FUN_00630f40("SID_SHELL_BACKGROUNDMUSIC_STRINGQUARTET",iVar1,param_1);
      break;
    case 0x24b4c2:
      uVar2 = FUN_00630f40("SID_SHELL_BACKGROUNDMUSIC_STEALTHMUSIC",iVar1,param_1);
      break;
    case 0x24b4cc:
      uVar2 = FUN_00630f40("SID_SHELL_BACKGROUNDMUSIC_SWINGTOWN",iVar1,param_1);
    }
  }
  return uVar2;
}

