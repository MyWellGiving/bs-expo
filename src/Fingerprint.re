[@bs.module "expo"] [@bs.scope "Fingerprint"] [@bs.val]
external hasHardwareAsync : unit => Js.Promise.t(bool) =
  "hasHardwareAsync";

[@bs.module "expo"] [@bs.scope "Fingerprint"] [@bs.val]
external isEnrolledAsync : unit => Js.Promise.t(bool) =
  "isEnrolledAsync";

[@bs.module "expo"] [@bs.scope "Fingerprint"] [@bs.val]
external authenticateAsync :
  Js.nullable(string) =>
  {
    .
    success: bool,
    error: Js.nullable(string),
  } =
  "authenticateAsync";

[@bs.module "expo"] [@bs.scope "Fingerprint"] [@bs.val]
external cancelAuthenticate : unit => unit = "cancelAuthenticate";