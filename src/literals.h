// SPDX-License-Identifier: LGPL-3.0-or-later
// Copyright 2016-2025 Hristo Gochkov, Mathieu Carbou, Emil Muratov

#pragma once

namespace asyncsrv {

static constexpr const char *empty = "";

static constexpr const char *T_inline = "inline";
static constexpr const char *T_attachment = "attachment; filename=\"%s\"";

static constexpr const char *T__opaque = "\", opaque=\"";
static constexpr const char *T_100_CONTINUE = "100-continue";
static constexpr const char *T_13 = "13";
static constexpr const char *T_ACCEPT = "accept";
static constexpr const char *T_Accept_Ranges = "accept-ranges";
static constexpr const char *T_app_xform_urlencoded = "application/x-www-form-urlencoded";
static constexpr const char *T_AUTH = "authorization";
static constexpr const char *T_auth_nonce = "\", qop=\"auth\", nonce=\"";
static constexpr const char *T_BASIC = "basic";
static constexpr const char *T_BASIC_REALM = "basic realm=\"";
static constexpr const char *T_BEARER = "bearer";
static constexpr const char *T_BODY = "body";
static constexpr const char *T_Cache_Control = "cache-control";
static constexpr const char *T_chunked = "chunked";
static constexpr const char *T_close = "close";
static constexpr const char *T_cnonce = "cnonce";
static constexpr const char *T_Connection = "connection";
static constexpr const char *T_Content_Disposition = "content-disposition";
static constexpr const char *T_Content_Encoding = "content-encoding";
static constexpr const char *T_Content_Length = "content-length";
static constexpr const char *T_Content_Type = "content-type";
static constexpr const char *T_Content_Location = "content-location";
static constexpr const char *T_Cookie = "cookie";
static constexpr const char *T_CORS_ACAC = "access-control-allow-credentials";
static constexpr const char *T_CORS_ACAH = "access-control-allow-headers";
static constexpr const char *T_CORS_ACAM = "access-control-allow-methods";
static constexpr const char *T_CORS_ACAO = "access-control-allow-origin";
static constexpr const char *T_CORS_ACMA = "access-control-max-age";
static constexpr const char *T_CORS_O = "origin";
static constexpr const char *T_data_ = "data: ";
static constexpr const char *T_Date = "date";
static constexpr const char *T_DIGEST = "digest";
static constexpr const char *T_DIGEST_ = "digest ";
static constexpr const char *T_ETag = "etag";
static constexpr const char *T_event_ = "event: ";
static constexpr const char *T_EXPECT = "expect";
static constexpr const char *T_FALSE = "false";
static constexpr const char *T_filename = "filename";
static constexpr const char *T_gzip = "gzip";
static constexpr const char *T_Host = "host";
static constexpr const char *T_HTTP_1_0 = "HTTP/1.0";
static constexpr const char *T_HTTP_100_CONT = "HTTP/1.1 100 Continue\r\n\r\n";
static constexpr const char *T_id__ = "id: ";
static constexpr const char *T_IMS = "if-modified-since";
static constexpr const char *T_INM = "if-none-match";
static constexpr const char *T_keep_alive = "keep-alive";
static constexpr const char *T_Last_Event_ID = "last-event-id";
static constexpr const char *T_Last_Modified = "last-modified";
static constexpr const char *T_LOCATION = "location";
static constexpr const char *T_LOGIN_REQ = "Login Required";
static constexpr const char *T_MULTIPART_ = "multipart/";
static constexpr const char *T_name = "name";
static constexpr const char *T_nc = "nc";
static constexpr const char *T_no_cache = "no-cache";
static constexpr const char *T_nonce = "nonce";
static constexpr const char *T_none = "none";
static constexpr const char *T_opaque = "opaque";
static constexpr const char *T_qop = "qop";
static constexpr const char *T_realm = "realm";
static constexpr const char *T_realm__ = "realm=\"";
static constexpr const char *T_response = "response";
static constexpr const char *T_retry_ = "retry: ";
static constexpr const char *T_retry_after = "retry-after";
static constexpr const char *T_nn = "\n\n";
static constexpr const char *T_rn = "\r\n";
static constexpr const char *T_rnrn = "\r\n\r\n";
static constexpr const char *T_Server = "server";
static constexpr const char *T_Transfer_Encoding = "transfer-encoding";
static constexpr const char *T_TRUE = "true";
static constexpr const char *T_UPGRADE = "upgrade";
static constexpr const char *T_uri = "uri";
static constexpr const char *T_username = "username";
static constexpr const char *T_WS = "websocket";
static constexpr const char *T_WWW_AUTH = "www-authenticate";

// HTTP Methods

static constexpr const char *T_ANY = "ANY";
static constexpr const char *T_GET = "GET";
static constexpr const char *T_POST = "POST";
static constexpr const char *T_PUT = "PUT";
static constexpr const char *T_DELETE = "DELETE";
static constexpr const char *T_PATCH = "PATCH";
static constexpr const char *T_HEAD = "HEAD";
static constexpr const char *T_OPTIONS = "OPTIONS";
static constexpr const char *T_UNKNOWN = "UNKNOWN";

// Req content types
static constexpr const char *T_RCT_NOT_USED = "RCT_NOT_USED";
static constexpr const char *T_RCT_DEFAULT = "RCT_DEFAULT";
static constexpr const char *T_RCT_HTTP = "RCT_HTTP";
static constexpr const char *T_RCT_WS = "RCT_WS";
static constexpr const char *T_RCT_EVENT = "RCT_EVENT";
static constexpr const char *T_ERROR = "ERROR";

// extensions & MIME-Types
static constexpr const char *T__css = ".css";
static constexpr const char *T__eot = ".eot";
static constexpr const char *T__gif = ".gif";
static constexpr const char *T__gz = ".gz";
static constexpr const char *T__htm = ".htm";
static constexpr const char *T__html = ".html";
static constexpr const char *T__ico = ".ico";
static constexpr const char *T__jpg = ".jpg";
static constexpr const char *T__js = ".js";
static constexpr const char *T__json = ".json";
static constexpr const char *T__pdf = ".pdf";
static constexpr const char *T__png = ".png";
static constexpr const char *T__svg = ".svg";
static constexpr const char *T__ttf = ".ttf";
static constexpr const char *T__woff = ".woff";
static constexpr const char *T__woff2 = ".woff2";
static constexpr const char *T__xml = ".xml";
static constexpr const char *T__zip = ".zip";
static constexpr const char *T_application_javascript = "application/javascript";
static constexpr const char *T_application_json = "application/json";
static constexpr const char *T_application_msgpack = "application/msgpack";
static constexpr const char *T_application_pdf = "application/pdf";
static constexpr const char *T_application_x_gzip = "application/x-gzip";
static constexpr const char *T_application_zip = "application/zip";
static constexpr const char *T_font_eot = "font/eot";
static constexpr const char *T_font_ttf = "font/ttf";
static constexpr const char *T_font_woff = "font/woff";
static constexpr const char *T_font_woff2 = "font/woff2";
static constexpr const char *T_image_gif = "image/gif";
static constexpr const char *T_image_jpeg = "image/jpeg";
static constexpr const char *T_image_png = "image/png";
static constexpr const char *T_image_svg_xml = "image/svg+xml";
static constexpr const char *T_image_x_icon = "image/x-icon";
static constexpr const char *T_text_css = "text/css";
static constexpr const char *T_text_event_stream = "text/event-stream";
static constexpr const char *T_text_html = "text/html";
static constexpr const char *T_text_plain = "text/plain";
static constexpr const char *T_text_xml = "text/xml";

// Response codes
static constexpr const char *T_HTTP_CODE_100 = "Continue";
static constexpr const char *T_HTTP_CODE_101 = "Switching Protocols";
static constexpr const char *T_HTTP_CODE_200 = "OK";
static constexpr const char *T_HTTP_CODE_201 = "Created";
static constexpr const char *T_HTTP_CODE_202 = "Accepted";
static constexpr const char *T_HTTP_CODE_203 = "Non-Authoritative Information";
static constexpr const char *T_HTTP_CODE_204 = "No Content";
static constexpr const char *T_HTTP_CODE_205 = "Reset Content";
static constexpr const char *T_HTTP_CODE_206 = "Partial Content";
static constexpr const char *T_HTTP_CODE_300 = "Multiple Choices";
static constexpr const char *T_HTTP_CODE_301 = "Moved Permanently";
static constexpr const char *T_HTTP_CODE_302 = "Found";
static constexpr const char *T_HTTP_CODE_303 = "See Other";
static constexpr const char *T_HTTP_CODE_304 = "Not Modified";
static constexpr const char *T_HTTP_CODE_305 = "Use Proxy";
static constexpr const char *T_HTTP_CODE_307 = "Temporary Redirect";
static constexpr const char *T_HTTP_CODE_400 = "Bad Request";
static constexpr const char *T_HTTP_CODE_401 = "Unauthorized";
static constexpr const char *T_HTTP_CODE_402 = "Payment Required";
static constexpr const char *T_HTTP_CODE_403 = "Forbidden";
static constexpr const char *T_HTTP_CODE_404 = "Not Found";
static constexpr const char *T_HTTP_CODE_405 = "Method Not Allowed";
static constexpr const char *T_HTTP_CODE_406 = "Not Acceptable";
static constexpr const char *T_HTTP_CODE_407 = "Proxy Authentication Required";
static constexpr const char *T_HTTP_CODE_408 = "Request Time-out";
static constexpr const char *T_HTTP_CODE_409 = "Conflict";
static constexpr const char *T_HTTP_CODE_410 = "Gone";
static constexpr const char *T_HTTP_CODE_411 = "Length Required";
static constexpr const char *T_HTTP_CODE_412 = "Precondition Failed";
static constexpr const char *T_HTTP_CODE_413 = "Request Entity Too Large";
static constexpr const char *T_HTTP_CODE_414 = "Request-URI Too Large";
static constexpr const char *T_HTTP_CODE_415 = "Unsupported Media Type";
static constexpr const char *T_HTTP_CODE_416 = "Requested range not satisfiable";
static constexpr const char *T_HTTP_CODE_417 = "Expectation Failed";
static constexpr const char *T_HTTP_CODE_429 = "Too Many Requests";
static constexpr const char *T_HTTP_CODE_500 = "Internal Server Error";
static constexpr const char *T_HTTP_CODE_501 = "Not Implemented";
static constexpr const char *T_HTTP_CODE_502 = "Bad Gateway";
static constexpr const char *T_HTTP_CODE_503 = "Service Unavailable";
static constexpr const char *T_HTTP_CODE_504 = "Gateway Time-out";
static constexpr const char *T_HTTP_CODE_505 = "HTTP Version not supported";
static constexpr const char *T_HTTP_CODE_ANY = "Unknown code";

static constexpr const uint8_t T_only_once_headers_len = 11;
static constexpr const char *T_only_once_headers[] = {T_Content_Length,    T_Content_Type,     T_Date,   T_ETag,    T_Last_Modified, T_LOCATION, T_retry_after,
                                                      T_Transfer_Encoding, T_Content_Location, T_Server, T_WWW_AUTH};

}  // namespace asyncsrv
