function get_locale_list() {
  $locales = array(
		"en_US" => gettext("English"),
		"pt_BR" => gettext("Portuguese (Brazil)"),
		"tr" => gettext("Turkish"),
	);
	asort($locales);
	return $locales;
}

function system_get_language_code() {
	global $config, $g_languages;

	// a language code, as per [RFC3066]
	$language = $config['system']['language'];
	//$code = $g_languages[$language]['code'];
	$code = str_replace("_", "-", $language);

	if (empty($code))
		$code = "en-US"; // Set default code.

	return $code;
}

function system_get_language_codeset() {
	global $config, $g_languages;

	$language = $config['system']['language'];
	$codeset = $g_languages[$language]['codeset'];

	if (empty($codeset))
		$codeset = "UTF-8"; // Set default codeset.

	return $codeset;
}

/* Available languages/locales */
$g_languages = array (
	"sq"    => array("codeset" => "UTF-8", "desc" => gettext("Albanian")),
	"bg"    => array("codeset" => "UTF-8", "desc" => gettext("Bulgarian")),
	"zh_CN" => array("codeset" => "UTF-8", "desc" => gettext("Chinese (Simplified)")),
	"zh_TW" => array("codeset" => "UTF-8", "desc" => gettext("Chinese (Traditional)")),
	"nl"    => array("codeset" => "UTF-8", "desc" => gettext("Dutch")),
	"da"    => array("codeset" => "UTF-8", "desc" => gettext("Danish")),
	"en_US" => array("codeset" => "ISO-8859-1", "desc" => gettext("English")),
	"fi"    => array("codeset" => "UTF-8", "desc" => gettext("Finnish")),
	"fr"    => array("codeset" => "UTF-8", "desc" => gettext("French")),
	"de"    => array("codeset" => "UTF-8", "desc" => gettext("German")),
	"el"    => array("codeset" => "UTF-8", "desc" => gettext("Greek")),
	"hu"    => array("codeset" => "UTF-8", "desc" => gettext("Hungarian")),
	"it"    => array("codeset" => "UTF-8", "desc" => gettext("Italian")),
	"ja"    => array("codeset" => "UTF-8", "desc" => gettext("Japanese")),
	"ko"    => array("codeset" => "UTF-8", "desc" => gettext("Korean")),
	"lv"    => array("codeset" => "UTF-8", "desc" => gettext("Latvian")),
	"nb"    => array("codeset" => "UTF-8", "desc" => gettext("Norwegian (Bokmal)")),
	"pl"    => array("codeset" => "UTF-8", "desc" => gettext("Polish")),
	"pt_BR" => array("codeset" => "ISO-8859-1", "desc" => gettext("Portuguese (Brazil)")),
	"pt"    => array("codeset" => "UTF-8", "desc" => gettext("Portuguese (Portugal)")),
	"ro"    => array("codeset" => "UTF-8", "desc" => gettext("Romanian")),
	"ru"    => array("codeset" => "UTF-8", "desc" => gettext("Russian")),
	"sl"    => array("codeset" => "UTF-8", "desc" => gettext("Slovenian")),
	"tr"    => array("codeset" => "UTF-8", "desc" => gettext("Turkish")),
	"es"    => array("codeset" => "UTF-8", "desc" => gettext("Spanish")),
	"sv"    => array("codeset" => "UTF-8", "desc" => gettext("Swedish")),
	"sk"    => array("codeset" => "UTF-8", "desc" => gettext("Slovak")),
	"cs"    => array("codeset" => "UTF-8", "desc" => gettext("Czech"))
);
